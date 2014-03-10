#include "/home/henry/git/pagai/pagai_assert.h"
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    assert(0);
  }
  return;
}
int __VERIFIER_nondet_int();

main()
{
  unsigned int SIZE=1;
  unsigned int j,k;
  int array[SIZE], menor;
  
  menor = __VERIFIER_nondet_int();

  for(j=0;j<SIZE;j++) {
       array[j] = __VERIFIER_nondet_int();
       
       if(array[j]<=menor)
          menor = array[j];                          
    }                       
    
    __VERIFIER_assert(array[0]>=menor);    
}

