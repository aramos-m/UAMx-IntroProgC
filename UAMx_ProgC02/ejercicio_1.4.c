#include <stdio.h>
#include <string.h>

#define DIM 20

int main(){
	char month[DIM];

	printf("Introduce el nombre de un mes en minúsculas: ");
	fgets(month, 11, stdin);

	if (strcmp(month, "enero")==0 || strcmp(month, "marzo")==0 || strcmp(month, "mayo")==0 || strcmp (month, "julio")==0 || strcmp (month, "agosto")==0 || strcmp(month, "octubre")==0 || strcmp(month, "diciembre")==0)
		printf("%s tiene 30 días\n", month);
	else if (strcmp(month, "abril")==0 || strcmp(month, "junio")==0 || strcmp(month, "septiembre")==0 || strcmp(month, "noviembre")==0)
		printf("%s tiene 31 días\n", month);
	else if (strcmp(month, "febrero")==0)
		printf("%s tiene 28/29 días\n", month);
	else
		printf("Incorrect month name\n");

	return 0;
}
