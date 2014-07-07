SCRIPTDIR=../scripts/
BCDIR=./bc/
RESDIR=./res/
PATCHEDDIR=./patched/

CFILES=${wildcard *.c}
BCFILES=$(CFILES:%.c=$(BCDIR)%.bc)
PATCHEDCFILES=$(CFILES:%.c=$(PATCHEDDIR)%.c)

bcfiles: $(BCFILES)
patchedcfiles: $(PATCHEDCFILES)

all: bcfiles patchedcfiles


$(BCDIR)%.bc: %.c | $(BCDIR)
	compile_llvm.sh -I -N -i $*.c -o $@
	#llvm-dis $@ -o $*.ll
	#python $(SCRIPTDIR)/charcute_bitcode.py --withinputfunctions $*.ll > $*.opt.ll
	#llvm-as $*.opt.ll -o $@
	#rm $*.opt.ll $*.ll

$(PATCHEDDIR)%.c: %.c | $(PATCHEDDIR)
	cp $< $@

$(BCDIR):
	mkdir -p $(BCDIR)

$(PATCHEDDIR):
	mkdir -p $(PATCHEDDIR)

$(BC_UNDEF_DIR):
	mkdir -p $(BC_UNDEF_DIR)


clean:
	rm -f $(RESDIR)*.res $(BCFILES) 
	
