SCRIPTDIR=../scripts/

LL_DIR=./ll/
BC_DIR=./bc/
PATCHEDDIR=./patched/

CFILES=${wildcard *.c}
PATCHEDCFILES=${wildcard $(PATCHEDDIR)*.c}
IFILES=${wildcard *.i} $(CFILES:%.c=%.i)
#BCFILES=$(IFILES:%.i=$(BC_DIR)/%.bc) 
BCFILES=$(PATCHEDFILES:$(PATCHEDDIR)/%.c=$(BC_DIR)/%.bc) 
LLFILES=$(BCFILES:$(BC_DIR)/%.bc=$(LL_DIR)/%.ll)

#PATCHEDCFILES=$(IFILES:%.i=$(PATCHEDDIR)/%.c)

all: $(BCFILES) $(LLFILES)

$(BC_DIR)/%.bc: $(PATCHEDDIR)/%.c | $(BC_DIR)
	#compile_llvm.sh -M -N -I -i $< -o $@
	compile_llvm.sh -M -N -i $< -o $@
	#llvm-dis $@ -o $*.ll
	#python $(SCRIPTDIR)/charcute_bitcode.py --withinputfunctions $*.ll > $*.opt.ll
	#llvm-as $*.opt.ll -o $@
	#rm $*.opt.ll $*.ll

$(LL_UNDEF_DIR)/%.ll: $(BC_UNDEF_DIR)/%.bc | $(LL_UNDEF_DIR)
	llvm-dis $< -o $@

$(LL_DIR)/%.ll: $(BC_DIR)/%.bc | $(LL_DIR)
	llvm-dis $< -o $@

$(BC_DIR):
	mkdir -p $(BC_DIR)

$(LL_DIR):
	mkdir -p $(LL_DIR)

clean:
	rm bc/* ll/*

patchedfiles: $(PATCHEDCFILES)

%.i: %.c
	/usr/bin/gcc -D_GNUCC -E -m64 -DCIL=1 -xc -o $@ $<

$(PATCHEDDIR)/%.c:  %.i | $(PATCHEDDIR)
	CIL_MACHINE="short=2,2 int=4,4 long=8,8 long_long=8,8 pointer=8,8 enum=4,4 float=4,4 double=8,8 long_double=16,16 void=1 bool=1,1 fun=1,1 alignof_string=1 alignof_enum=4 max_alignment=16 size_t=unsigned_long wchar_t=int char_signed=true const_string_literals=true big_endian=false __thread_is_keyword=true __builtin_va_list=true underscore_name=true" /local/henry/ufo-svcomp13/bin/cilly.asm.exe --out $@.cil --noInsertImplicitCasts --noPrintLn --useLogicalOperators --envmachine $<
	sed -i -e "s/void main(/int main(/g" $@.cil
	sed -i -e "s/__inline//g" $@.cil
	sed -i -e "s/ERROR:/ERROR: __VERIFIER_error();/g" $@.cil
	sed -i '1s/^/extern void __VERIFIER_error() __attribute__ ((__noreturn__)); /' $@.cil
	cp $@.cil $@



$(PATCHEDDIR): 
	@mkdir -p $(PATCHEDDIR)
