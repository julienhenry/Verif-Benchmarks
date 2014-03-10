#include "/home/henry/git/pagai/pagai_assert.h"
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    assert(0);
  }
  return;
}
#define a (2)
#define SIZE 8
int main() { 
  int i, sn=0;
  for(i=1; i<=SIZE; i++) {
    sn = sn + a;
  }
  __VERIFIER_assert(sn==SIZE*a || sn == 0);
}

