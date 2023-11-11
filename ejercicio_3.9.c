#include <stdio.h>
#include <string.h>
#define DIM 100

int main() {
	char src[DIM], dst[DIM];

	printf("Introduce una de caracteres: ");
	fgets(src, DIM, stdin);

	printf("La cadena de caracteres copiada es: %s", strcpy(dst, src));

	printf("El resultado de comparar ambas cadenas es: %d", strcmp(dst, src));

	return 0;
}
