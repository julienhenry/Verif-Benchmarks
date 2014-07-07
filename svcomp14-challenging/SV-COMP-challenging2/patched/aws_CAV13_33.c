extern void __VERIFIER_error() __attribute__ ((__noreturn__));
int unknown1();
int unknown2();
int unknown3();

int main()
{
  int k = unknown1();
  int z = k;
  int x = 0;
  int y = 0;

  while(unknown1())
  {
    int c = 0;
    while(unknown2())
    {
      if(z==k+y-c)
      {
        x++;
        y++;
        c++;
      }else
      {
        x++;
        y--;
        c++;
      }
    }
    while(unknown3())
    {
      x--;
      y--;
    }
    z=k+y;
  }
  if(x <= y - 1 || x >= y + 1)
  {
ERROR:
		__VERIFIER_error();
		goto ERROR;
  }

}
