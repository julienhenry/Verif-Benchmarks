SCRIPTDIR=../scripts/

LL_DIR=./ll/
LL_UNDEF_DIR=./ll-undef/
BC_DIR=./bc/
BC_UNDEF_DIR=./bc-undef/

CFILES=${wildcard *.c}
BCFILES=$(CFILES:%.c=$(BC_DIR)/%.bc)
LLFILES=$(BCFILES:$(BC_DIR)/%.bc=$(LL_DIR)/%.ll)
BC_UNDEF_FILES=$(CFILES:%.c=$(BC_UNDEF_DIR)/%.bc)
LL_UNDEF_FILES=$(BC_UNDEF_FILES:$(BC_UNDEF_DIR)/%.bc=$(LL_UNDEF_DIR)/%.ll)

PATCHEDDIR=./patched/
PATCHEDCFILES=$(CFILES:%.c=$(PATCHEDDIR)/%.c)

all: $(BCFILES) $(BC_UNDEF_FILES) $(LLFILES)


$(BC_UNDEF_DIR)/%.bc: $(PATCHEDDIR)/%.c | $(BC_UNDEF_DIR)
	compile_llvm.sh -I -g -i $< -o $@
	llvm-dis $@ -o $*.ll
	python $(SCRIPTDIR)/charcute_bitcode.py --withinputfunctions $*.ll > $*.opt.ll
	llvm-as $*.opt.ll -o $@
	rm $*.opt.ll $*.ll

$(BC_DIR)/%.bc: $(PATCHEDDIR)/%.c | $(BC_DIR)
	compile_llvm.sh -N -g -I -i $< -o $@
	llvm-dis $@ -o $*.ll
	python $(SCRIPTDIR)/charcute_bitcode.py --withinputfunctions $*.ll > $*.opt.ll
	llvm-as $*.opt.ll -o $@
	rm $*.opt.ll $*.ll

$(LL_UNDEF_DIR)/%.ll: $(BC_UNDEF_DIR)/%.bc | $(LL_UNDEF_DIR)
	llvm-dis $< -o $@

$(LL_DIR)/%.ll: $(BC_DIR)/%.bc | $(LL_DIR)
	llvm-dis $< -o $@

$(BC_DIR):
	mkdir -p $(BC_DIR)

$(BC_UNDEF_DIR):
	mkdir -p $(BC_UNDEF_DIR)

$(LL_DIR):
	mkdir -p $(LL_DIR)

$(LL_UNDEF_DIR):
	mkdir -p $(LL_UNDEF_DIR)

clean:
	rm bc/* ll/*

patchedfiles: $(PATCHEDCFILES)

$(PATCHEDDIR)/%.c:  %.c | $(PATCHEDDIR)
	@cat $*.c > $@
	#@sed -i 's/ERROR: goto ERROR;/assert(0);/g' $@
	#@sed -i 's/ERROR: /ERROR: assert(0);/g' $@
	@sed -i 's/void __VERIFIER_assume/void __VERIFIER_unused_assume/g' $@
	@sed -i 's/__VERIFIER_assume/assume/g' $@
	@sed -i '1i#include "/home/henry/git/pagai/pagai_assert.h"' $@

$(PATCHEDDIR): 
	@mkdir $(PATCHEDDIR)
