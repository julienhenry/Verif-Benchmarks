#ifndef COSTCOUNTER_H
#define COSTCOUNTER_H

#include <map>

#include "llvm/Pass.h"
#include "llvm/IR/Constants.h"
#include "llvm/Support/CFG.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/SmallPtrSet.h"
#include "llvm/Analysis/Dominators.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/IR/Module.h"

using namespace std;
using namespace llvm;

/// Create cost instructions inside the code
class CostCounter : public FunctionPass {

private:
	class BlockNode{
	public:
		// Instruction data
		char counterName[20]; 
		Instruction *counterPtr;
		PHINode* phi;
		int cost;
		
		// Articulation point data
		int low; // lowest time visited of the childs + itself
		int d; // time visited
		BlockNode *pre; // predescessor
		bool isArticulationPoint;
		
		// MaxPlus data
		int maxCost;
		
		BlockNode() : phi(NULL), d(0), isArticulationPoint(false), maxCost(-1) {}
	};
  
	Module *mod;
	int numVars;
	int dfsTime;
	map<BasicBlock *, BlockNode *> graph;
	
	void articulationPoint(BasicBlock *bb);
	int maxPlus(BasicBlock *bb);
	void setModule(Module *m);
public:
	CostCounter();
	CostCounter(Module *m);
	static char ID;

	const char * getPassName() const;
	virtual bool runOnFunction(Function &F);
	virtual void getAnalysisUsage(AnalysisUsage &AU) const;
	virtual bool doFinalization(Module &M);
};


#endif


