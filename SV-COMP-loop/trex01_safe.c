#include "/home/henry/git/pagai/pagai_assert.h"
_Bool __VERIFIER_nondet_bool();

void f(int d) {
  int x, y, k, z = 1;
  while (z < k) { 
	  z = 2 * z; 
  }
  assert(z>=1);
  while (x > 0 && y > 0) {
    _Bool c = __VERIFIER_nondet_bool();
    if (c) {
      P1:
      x = x - d;
      y = __VERIFIER_nondet_bool();;
      z = z - 1;
    } else {
      y = y - d;
    }
  }
}

void main() {
  _Bool c = __VERIFIER_nondet_bool();
  if (c) {
    f(1);
  } else {
    f(2);
  }
}

