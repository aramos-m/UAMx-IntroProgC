#include <stdio.h>

int main() {
	char c1 = 'm', c2 = 'a', c3 = 'n', c4 = 'o', c5 = 's';

	printf("La palabra original es: %c%c%c%c%c\n", c1, c2, c3, c4, c5);
	printf("La palabra cifrada es: %c%c%c%c%c", c1+3, c2+3, c3+3, c4+3, c5+3);

	return 0;
}
