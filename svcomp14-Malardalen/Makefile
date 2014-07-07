SCRIPTDIR=../scripts/
BCDIR=./bc/
BC_UNDEF_DIR=./bc-undef/
RESDIR=./res/
INSTRUMENTEDBCDIR=../malardalen_instrumented/bc/

CFILES=${wildcard *.c}
BCFILES=$(CFILES:%.c=$(BCDIR)%.bc)
BC_UNDEF_FILES=$(CFILES:%.c=$(BC_UNDEF_DIR)%.bc)
INSTRUMENTEDBCFILES=$(CFILES:%.c=$(INSTRUMENTEDBCDIR)%.bc)

bcfiles: $(BCFILES)
bcundeffiles: $(BC_UNDEF_FILES)

instrumentedbcfiles: $(INSTRUMENTEDBCFILES)

all: bcfiles bcundeffiles instrumentedbcfiles

.PRECIOUS: $(INSTRUMENTEDBCFILES)

$(INSTRUMENTEDBCDIR)%.bc: $(BCDIR)%.bc
	cp $< $@
	#compile_llvm.sh -I -N -g -i $*.c -o $@
	$(SCRIPTDIR)instructionsWCET/instructionsWCET -i $(INSTRUMENTEDBCDIR)$*.bc > $(INSTRUMENTEDBCDIR)$*.ll
	llvm-as $(INSTRUMENTEDBCDIR)$*.ll

$(BCDIR)%.bc: %.c | $(BCDIR)
	compile_llvm.sh -I -N -i $*.c -o $@
	#llvm-dis $@ -o $*.ll
	#python $(SCRIPTDIR)/charcute_bitcode.py --withinputfunctions $*.ll > $*.opt.ll
	#llvm-as $*.opt.ll -o $@
	#rm $*.opt.ll $*.ll

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
	
