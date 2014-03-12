#include <stack>
#include <cstdio>
#include <iostream>
#include <algorithm>

#include "Analyzer.h"
#include "CostCounter.h"
#include "llvm/Support/CFG.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/Support/Casting.h"
#include "llvm/IR/BasicBlock.h"

using namespace llvm;

char CostCounter::ID = 0;
static RegisterPass<CostCounter>
X("cost-counter", "Cost Counter Instructions", false, true);


const char * CostCounter::getPassName() const {
	return "CostCounter";
}

void CostCounter::getAnalysisUsage(AnalysisUsage &AU) const {
	//AU.addRequired<LoopInfo>();
	//AU.setPreservesAll();
}

CostCounter::CostCounter() : FunctionPass(ID), numVars(0), dfsTime(0) {
}

CostCounter::CostCounter(Module *m) : FunctionPass(ID), numVars(0), dfsTime(0) {
	setModule(m);
}

// Algorithm to find the articulation poins, used with the MAX+
void CostCounter::articulationPoint(BasicBlock *bb){
	BlockNode *u = graph[bb];
	u->low = u->d = ++dfsTime;
 	for (succ_iterator sit = succ_begin(bb), send = succ_end(bb); sit != send; ++sit){
		BlockNode *v = graph[*sit];
		if (v->d == 0){
			v->pre = u;
			articulationPoint(*sit);
			u->low = min(u->low, v->low);
			if (v->low >= u->d)
				// If none of descendents of v (and v) was visited before u
				u->isArticulationPoint = true;
		}
		else if (v != u->pre) // not a back edge
			u->low = min(u->low, v->low);
	}
	for (pred_iterator pit = pred_begin(bb), pend = pred_end(bb); pit != pend; ++pit){
		BlockNode *v = graph[*pit];
		if (v->d == 0){
			v->pre = u;
			articulationPoint(*pit);
			u->low = min(u->low, v->low);
			if (v->low >= u->d)
				// If none of descendents of v (and v) was visited before u
				u->isArticulationPoint = true;
		}
		else if (v != u->pre) // not a back edge
			u->low = min(u->low, v->low);
	}
}

// Does not work with cycles
int CostCounter::maxPlus(BasicBlock *bb){
	if (graph[bb]->maxCost >= 0)
		return graph[bb]->maxCost;
	int best = 0;
	for (pred_iterator pit = pred_begin(bb), pend = pred_end(bb); pit != pend; ++pit)
		best = max(best, maxPlus(*pit));
	return (graph[bb]->maxCost = best + graph[bb]->cost);
}

bool CostCounter::runOnFunction(Function &F) {
	// Iterators
	Function::iterator bb = F.begin(), e = F.end(), be = F.end();
	--be;
	// Temporary variables names
	char cost[20], tmpCounterName[20];;
	
	// Create 0
	ConstantInt* const_0 = ConstantInt::get(mod->getContext(), APInt(32, StringRef("0"), 10));
	// Create the first cost
	sprintf(cost, "%d", (int)bb->size()-2);
	ConstantInt* costConst = ConstantInt::get(mod->getContext(), APInt(32, StringRef(cost), 10));
	// Create instruction for the first block
	graph[bb] = new BlockNode();
	graph[bb]->cost = (int)bb->size()-2;
	sprintf(graph[bb]->counterName, "CostCounter_%d", numVars++);
	graph[bb]->counterPtr = BinaryOperator::Create(Instruction::Add, const_0, costConst, graph[bb]->counterName);
	bb->getInstList().insert(bb->getInstList().back(), graph[bb]->counterPtr);
	
	// Create graph and instructions for the remaining blocks
	for (++bb; bb != e; ++bb){
		graph[bb] = new BlockNode();
		// Create cost
		sprintf(cost, "%d", (int)bb->size());		
		ConstantInt* costConst = ConstantInt::get(mod->getContext(), APInt(32, StringRef(cost), 10));
		graph[bb]->cost = (int)bb->size();
		// if only 1 predecessor
		if (++pred_begin(bb) == pred_end(bb)){
			sprintf(graph[bb]->counterName, "CostCounter_%d", numVars++);
			graph[bb]->counterPtr = BinaryOperator::Create(Instruction::Add, graph[*pred_begin(bb)]->counterPtr, costConst, graph[bb]->counterName);
			
		}
		else{
			sprintf(tmpCounterName, "CostCounter_%d", numVars++);
			sprintf(graph[bb]->counterName, "CostCounter_%d", numVars++);
			graph[bb]->phi = PHINode::Create(
					IntegerType::get(mod->getContext(), 32), 
					0,
					tmpCounterName, 
					&bb->getInstList().front());
			graph[bb]->counterPtr = BinaryOperator::Create(Instruction::Add, graph[bb]->phi, costConst, graph[bb]->counterName);
		}
		//cout << "Counter created " << graph[bb]->counterName << endl;
		bb->getInstList().insert(bb->getInstList().back(), graph[bb]->counterPtr);
	}
	bb = F.begin();
	
	// Add parameters to the phi functions
	for (++bb; bb != e; ++bb){
		if (++pred_begin(bb) != pred_end(bb))
			for (pred_iterator pit = pred_begin(bb), pend = pred_end(bb); pit != pend; ++pit)
				graph[bb]->phi->addIncoming(graph[*pit]->counterPtr, *pit);
	}


	// Comment to generate "hint" constraints
	return true;
	
	/*  From here, it is the constraint generation supposed to add hints to the program */

	articulationPoint(F.begin());
	graph[be]->isArticulationPoint = true; // last block exception
	
	maxPlus(be);

	BasicBlock *forbiddenBlock = BasicBlock::Create(mod->getContext(), "", &F, 0);
	new UnreachableInst(mod->getContext(), forbiddenBlock);
	
	// Add constraints in a few scenarios, this is experimental yet.
	for (bb = F.begin(); bb != e; ++bb){
		if (llvm::ReturnInst::classof(&bb->back()))
			break;

		// Splits the block adding a new constraint of the kind "var <= constant"
		if (++succ_begin(bb) == succ_end(bb) && !llvm::ReturnInst::classof(&bb->back())){

			sprintf(cost, "%d", graph[bb]->maxCost);
			ConstantInt* maxConst = ConstantInt::get(mod->getContext(), APInt(32, StringRef(cost), 10));

			BasicBlock *suc = *succ_begin(bb);
			bb->back().eraseFromParent();

			ICmpInst* assertion = new ICmpInst(*bb, ICmpInst::ICMP_SLE, graph[bb]->counterPtr, maxConst, "");

			BranchInst::Create(suc, forbiddenBlock, assertion, bb);
		}
	}
	
	return true;
}

bool CostCounter::doFinalization(Module &M){
	*Out << M;
	return false;
}

void CostCounter::setModule(Module *m){
	mod = m;
}
