extern void __VERIFIER_error() __attribute__ ((__noreturn__));
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * InvGen, CAV'09 paper, fig 2
 */

void main() {
  int n = unknown1();
  int x= 0;
  while(x<=n-1) {
    x++;
  } 
  if(x < n)
    return;
  if(n>=1 && (x<=n-1 || x >= n+1))
  {
ERROR:
		__VERIFIER_error();
		goto ERROR;
  }

}
