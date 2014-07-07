extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern int unknown1();
extern int unknown2();
extern int unknown3();
extern int unknown4();

void main(int argc, char* argv[]) {

  int n = unknown1();
  int i = unknown1();
  int j = unknown1();
  int k = unknown1();

  if(n < 1)
    return;
  if(k < n)
    return;
  j = 0;
  while( j <= n-1 ) {
    j++;
    k--;
  } 
  if(j < n)
    return;
	if (!(k > -1)) {
ERROR:
		__VERIFIER_error();
		goto ERROR;
	}
}
