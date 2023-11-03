#include <stdio.h>
#include <string.h>

int main() {
	char palabra[100];
	int i;

	printf("Escribe una palabra: ");
	scanf("%99s", palabra);
	printf("La longitud de dicha palabra es: %lu.\n", strlen(palabra));
	printf("Indica un número menor a dicha longitud: ");
	scanf("%d", &i);

	palabra[i] = 0;

	printf("La palabra cortada en la letra %d es: %s.", i, palabra);

	return 0;
}
