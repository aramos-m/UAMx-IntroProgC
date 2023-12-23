#include <stdio.h>
#include <string.h>
#define DIM 100

int main(){
	char str1[DIM], str2[DIM];

	printf("Introduce una cadena: ");
	fgets(str1, DIM, stdin);

	printf("Introduce otra cadena: ");
	fgets(str2, DIM, stdin);

	printf("El valor devuelto por la comparación de las cadenas es: %d", strcmp(str1, str2));
	
	return 0;
}
