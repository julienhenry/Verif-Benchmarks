SCRIPTDIR=../scripts/
BCDIR=./bc/
RESDIR=./res/

CFILES=${wildcard *.c}
BCFILES=$(CFILES:%.c=$(BCDIR)%.bc)

bcfiles: $(BCFILES)

all: bcfiles 

.PRECIOUS: $(INSTRUMENTEDBCFILES)

$(BCDIR)%.bc: %.c | $(BCDIR)
	compile_llvm.sh -I -N -i $*.c -o $@
	#llvm-dis $@ -o $*.ll
	#python $(SCRIPTDIR)/charcute_bitcode.py --withinputfunctions $*.ll > $*.opt.ll
	#llvm-as $*.opt.ll -o $@
	#rm $*.opt.ll $*.ll

$(BCDIR):
	mkdir -p $(BCDIR)

$(BC_UNDEF_DIR):
	mkdir -p $(BC_UNDEF_DIR)


clean:
	rm -f $(RESDIR)*.res $(BCFILES) $(INSTRUMENTEDBCFILES)
	
