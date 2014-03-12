SCRIPTDIR=../scripts/
BCDIR=./bc/
RESDIR=./res/
INSTRUMENTEDBCDIR=../malardalen_instrumented/bc/

CFILES=${wildcard *.c}
BCFILES=$(CFILES:%.c=$(BCDIR)%.bc)
INSTRUMENTEDBCFILES=$(CFILES:%.c=$(INSTRUMENTEDBCDIR)%.bc)

all: $(BCFILES) $(INSTRUMENTEDBCFILES)

.PRECIOUS: $(INSTRUMENTEDBCFILES)

$(INSTRUMENTEDBCDIR)%.bc: $(BCDIR)%.bc
	#cp $< $@
	compile_llvm.sh -I -i $*.c -o $@
	$(SCRIPTDIR)instructionsWCET/instructionsWCET -i $(INSTRUMENTEDBCDIR)$*.bc > $(INSTRUMENTEDBCDIR)$*.ll
	llvm-as $(INSTRUMENTEDBCDIR)$*.ll

$(BCDIR)%.bc: %.c
	compile_llvm.sh -I -i $*.c -o $@
	llvm-dis $@ -o $*.ll
	python $(SCRIPTDIR)/charcute_bitcode.py $*.ll > $*.opt.ll
	llvm-as $*.opt.ll -o $@
	rm $*.opt.ll $*.ll


clean:
	rm -f $(RESDIR)*.res $(BCFILES) $(INSTRUMENTEDBCFILES)
	
