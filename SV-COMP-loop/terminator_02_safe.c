#include "/home/henry/git/pagai/pagai_assert.h"
extern void __VERIFIER_unused_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    assert(0);
  }
  return;
}
int __VERIFIER_nondet_int();
_Bool __VERIFIER_nondet_bool();

main()
{
  int x=__VERIFIER_nondet_int();
  int y=__VERIFIER_nondet_int();
  int z=__VERIFIER_nondet_int();
  assume(x<100);
  assume(z<100);
  while(x<100 && 100<z) 
  {
    _Bool tmp=__VERIFIER_nondet_bool();
    if (tmp)
   {
     x++;
   }
   else
   {
     x--;
     z--;
   }
  }                       
    
  __VERIFIER_assert(x>=100 || z<=100);
}

