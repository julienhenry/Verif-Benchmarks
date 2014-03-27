SCRIPTDIR=../scripts/

CFILES=${wildcard *.c}
BCFILES=$(CFILES:%.c=bc/%.bc)
LLFILES=$(BCFILES:bc/%.bc=ll/%.ll)

all: $(BCFILES) $(LLFILES)

bc-undef/%.bc: %.c
	compile_llvm.sh -I -g -i $*.c -o $@
	llvm-dis $@ -o $*.ll
	python $(SCRIPTDIR)/charcute_bitcode.py --withinputfunctions $*.ll > $*.opt.ll
	llvm-as $*.opt.ll -o $@
	rm $*.opt.ll $*.ll

bc/%.bc: %.c
	compile_llvm.sh -N -g -I -i $*.c -o $@
	llvm-dis $@ -o $*.ll
	python $(SCRIPTDIR)/charcute_bitcode.py --withinputfunctions $*.ll > $*.opt.ll
	llvm-as $*.opt.ll -o $@
	rm $*.opt.ll $*.ll

ll-undef/%.ll: bc/%.bc
	llvm-dis $< -o $@

ll/%.ll: bc/%.bc
	llvm-dis $< -o $@

clean:
	rm bc/* ll/*
