SCRIPTDIR=../scripts/
BCDIR=./bc/
BC_UNDEF_DIR=./bc-undef/
RESDIR=./res/

CFILES=${wildcard *.c}
BCFILES=$(CFILES:%.c=$(BCDIR)%.bc)
BC_UNDEF_FILES=$(CFILES:%.c=$(BC_UNDEF_DIR)%.bc)

bcfiles: $(BCFILES)
bcundeffiles: $(BC_UNDEF_FILES)


all: bcfiles bcundeffiles 


$(BCDIR)%.bc: %.c | $(BCDIR)
	compile_llvm.sh -I -N -g -i $*.c -o $@
	llvm-dis $@ -o $*.ll
	python $(SCRIPTDIR)/charcute_bitcode.py --withinputfunctions $*.ll > $*.opt.ll
	llvm-as $*.opt.ll -o $@
	rm $*.opt.ll $*.ll

$(BC_UNDEF_DIR)%.bc: %.c | $(BC_UNDEF_DIR)
	compile_llvm.sh -I -g -i $*.c -o $@
	llvm-dis $@ -o $*.ll
	python $(SCRIPTDIR)/charcute_bitcode.py --withinputfunctions $*.ll > $*.opt.ll
	llvm-as $*.opt.ll -o $@
	rm $*.opt.ll $*.ll

$(BCDIR):
	mkdir -p $(BCDIR)

$(BC_UNDEF_DIR):
	mkdir -p $(BC_UNDEF_DIR)


clean:
	rm -f $(RESDIR)*.res $(BCFILES) $(INSTRUMENTEDBCFILES)
	
