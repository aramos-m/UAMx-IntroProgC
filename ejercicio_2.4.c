#include <stdio.h>

int main() {
	char m = 109, a = 97, n = 110, o = 111, s = 115;
	printf("La palabra original es: %c%c%c%c%c\n", m, a, n, o, s);

	char p = m + 3, d = a + 3, q = n + 3, r = o + 3, v = s + 3;
	printf("La palabra cifrada es: %c%c%c%c%c", p, d, q, r, v);

	return 0;
}
