#include <stdio.h>
#include <string.h>
#define DIM 100

int main() {
	char str1[DIM], str2[DIM], aux;
	int len;

	printf("Introduce una palabra: ");
	scanf("%s", str1);

	len = strlen(str1);
	strcpy(str2, str1);
	aux = str2[0];
	str2[0] = str2[len-1];
	str2[len-1] = aux;

	printf("Si a la palabra %s, que tiene %d caracteres, le intercambiamos el primer y último carácter obtenemos la palabra %s", str1, len, str2);

	return 0;
}
