#include <stdio.h>

int main() {
	char m = 109, a = 97, n = 110, o = 111, s = 115;
	printf("La palabra original es: %c%c%c%c%c\n", m, a, n, o, s);
	printf("La palabra cifrada es: %c%c%c%c%c", m+3, a+3, n+3, o+3, s+3);

	return 0;
}
