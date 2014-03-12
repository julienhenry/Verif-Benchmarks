LLVM_PATH	= ~/git/pagai/external/llvm/

SRC		= $(wildcard ./*.cc)
BIN_REP		= ./
SRC_REP		= ./
OBJS		= $(subst $(SRC_REP),$(BIN_REP),$(SRC:.cc=.o))
CC			= clang++
#CPPFLAGS	= -Wall -g -DPRINT_DEBUG -O2 
CPPFLAGS	= -O2 
LDFLAGS		=
ICFLAGS		= -I$(LLVM_PATH)/include
EXEC		= instructionsWCET

CPPFLAGS += $(shell llvm-config --cxxflags) 

LDFLAGS  += $(shell llvm-config --ldflags)
LDFLAGS  += $(shell llvm-config --libs engine bitreader core)

all: $(EXEC)

$(EXEC) : $(OBJS)
	$(CC) $(LCFLAGS) -o $@ $^ $(LDFLAGS)

${BIN_REP}%.o : %.cc *.h
	$(CC) $(ICFLAGS) -o $@ -c $< $(CPPFLAGS)

.PHONY: clean realclean

clean:
	rm -rf $(BIN_REP)*.o

realclean: clean
	rm -rf $(EXEC)

