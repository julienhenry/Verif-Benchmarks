#include "/home/henry/git/pagai/pagai_assert.h"
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    assert(0);
  }
  return;
}
extern unsigned int __VERIFIER_nondet_uint();
int main() { 
  unsigned int i, n=__VERIFIER_nondet_uint(), sn=0;
  for(i=0; i<=n; i++) {
    sn = sn + i;
  }
  __VERIFIER_assert(sn==(n*(n+1))/2 || sn == 0);
}
