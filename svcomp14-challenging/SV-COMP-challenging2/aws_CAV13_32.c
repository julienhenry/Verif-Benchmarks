extern void __VERIFIER_error() __attribute__ ((__noreturn__));
int unknown1();
int unknown2();
int unknown3();
int unknown4();

void main(int n)
{
	int k=1;
	int i=1;
	int j=0;
	while(i<=n-1) {
		if(k <= i-1) {
ERROR:
			__VERIFIER_error();
			goto ERROR;
		}
		j=0;
		while(j<=i-1) {
			k += (i-j);
			j++;
		}
		if(j < i)
			return;
		i++;
	}

}

