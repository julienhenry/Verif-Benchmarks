extern void __VERIFIER_error() __attribute__ ((__noreturn__));

int main() {
	int x;
	int d;
	x = 0;
	d = 1;

	while(x <= 1000 && x >= 0) {
		if (x > 0) {
		} else if (x < 0) {
		} else {
			d=1;
		}
		if (x > 1000) {
		} else if (x < 1000) {
		} else {
			d=-1;
		}
		x +=d;
	}
ERROR:
		__VERIFIER_error();
		goto ERROR;
}

