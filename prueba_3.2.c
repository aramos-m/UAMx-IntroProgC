#include <stdio.h>
#include <string.h>
#define DIM 100

int main() {
	char str1[DIM], str2[DIM];
	char aux;

	printf("Introduce una palabra: ");
	scanf("%s", str1);

	strcpy(str2, str1);

	aux = str1[0];
	str1[0] = str1[strlen(str1)-1];
	str1[strlen(str1)-1] = aux;

	printf("Si a la palabra %s, que tiene %d caracteres, le intercambiamos el primer y último carácter obtenemos la palabra %s", str2, strlen(str2), str1);

	return 0;
}
