extern void __VERIFIER_error() __attribute__ ((__noreturn__));
int input();
int main (){

  int x = -50;
  int y = input();
  while (x < 0){
     x = x + y;
     y++;
  }

  if (y < 0)
    goto ERROR;

  return 1;

ERROR: 
		__VERIFIER_error();
		goto ERROR;


}
