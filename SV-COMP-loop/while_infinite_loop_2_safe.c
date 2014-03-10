#include "/home/henry/git/pagai/pagai_assert.h"
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    assert(0);
  }
  return;
}
int main() {
  int x=0;

  while(1)
  {
    __VERIFIER_assert(x==0);    
  }

  __VERIFIER_assert(x==0);
}
