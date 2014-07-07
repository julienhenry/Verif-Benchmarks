extern void __VERIFIER_error() __attribute__ ((__noreturn__));
int nondet();

int main (){

 int x = 0;
 int  y = 0;

  while (nondet()){
    x += 4;
    y += 1;
  }

  while (x > 0){
    x = x - 4;
    y = y - 1;
  }

  if (y <= -1)
    goto ERROR;

  return 1;

  ERROR: 
		__VERIFIER_error();
		goto ERROR;
}
