SCRIPTDIR=../scripts/

CFILES=${wildcard *.c}
BCFILES=$(CFILES:%.c=bc/%.bc)
LLFILES=$(BCFILES:bc/%.bc=ll/%.ll)

all: $(BCFILES) $(LLFILES)

bc/%.bc: %.c
	compile_llvm.sh -I -i $*.c -o $@
	llvm-dis $@ -o $*.ll
	python $(SCRIPTDIR)/charcute_bitcode.py $*.ll > $*.opt.ll
	llvm-as $*.opt.ll -o $@
	rm $*.opt.ll $*.ll

ll/%.ll: bc/%.bc
	llvm-dis $< -o $@

clean:
	rm bc/* ll/*
