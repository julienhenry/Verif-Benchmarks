#include "/home/henry/git/pagai/pagai_assert.h"
extern void __VERIFIER_unused_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    assert(0);
  }
  return;
}

int __VERIFIER_nondet_int();

int main() {
  int i=0, x=0, y=0;
  int n=__VERIFIER_nondet_int();
  assume(n>0);
  for(i=0; 1; i++)
  {
    __VERIFIER_assert(x==0);
  }
  __VERIFIER_assert(x!=0);
}

