#include <stdio.h>
#include <string.h>

#define DIM 20

int main(){
	char month[DIM];

	printf("Introduce el nombre de un mes en minúsculas: ");
	fgets(month, 11, stdin);

	size_t len = strlen(month);
	if (len > 0 && month[len - 1] == '\n')
		month[len - 1] = '\0';

	if (!strcmp(month, "febrero"))
		printf("%s tiene 28/29 días\n", month);
	else if (!strcmp(month, "abril") || !strcmp(month, "junio") || !strcmp(month, "septiembre") || !strcmp(month, "noviembre"))
		printf("%s tiene 30 días\n", month);
	else if (!strcmp(month, "enero") || !strcmp(month, "marzo") || !strcmp(month, "mayo") || !strcmp (month, "julio") || !strcmp (month, "agosto") || !strcmp(month, "octubre") || !strcmp(month, "diciembre"))
		printf("%s tiene 31 días\n", month);
	else
		printf("Incorrect month name\n");

	return 0;
}
