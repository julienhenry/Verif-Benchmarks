extern void __VERIFIER_error() __attribute__ ((__noreturn__));
int main() {
	int x = 0;
	int y = 0;

	while (1) {
		if (x <= 50) y++;
		else y--;

		if (y < 0) break;
		x++;
	}
	if (x+y > 102) {
ERROR:
		__VERIFIER_error();
		goto ERROR;
	}
}

