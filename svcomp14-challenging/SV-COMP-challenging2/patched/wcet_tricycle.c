extern void __VERIFIER_error() __attribute__ ((__noreturn__));
int main() {
	int count=0, phase=0;
	for(int i=0; i<10000; i++) {
		if (phase == 0) { count += 3; phase = 1; }
		else if (phase == 1) { count += 2; phase = 2; }
		else /* phase == 2 */ { count += 1; phase = 0; }
	}
	if (count > 20003) {
ERROR:
		__VERIFIER_error();
		goto ERROR;
	}
}
