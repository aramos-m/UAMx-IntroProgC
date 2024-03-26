#include <stdio.h>

//EXCHANGE TO DATE 24 MARCH 2024
#define USD_PER_EUR 1.09
#define JPY_PER_EUR 164.49
#define GBP_PER_EUR 0.86
#define DIM 100

int main() {
	float euro;
	char option[DIM];

	printf("Introduce una cantidad en euros: ");
	scanf("%f", &euro);

	printf("Selecciona una opción:\n (D)ólar\n (Y)en japonés\n (L)ibra esterlina\n");
	scanf(" %s", &option);
	printf("%s\n", option);

	if (!(option[1] == '\0')) {
		printf("Incorrect option. Please, select D/d, Y/y or L/l.\n");
		return 1;
	}

	switch (option[0]) {
		case 'D':
		case 'd':
			printf("%.2f euros son %.2f dólares.\n", euro, euro * USD_PER_EUR);
		break;

		case 'Y':
		case 'y':			
			printf("%.2f euros son %.2f yenes.\n", euro, euro * JPY_PER_EUR);
		break;

		case 'L':
		case 'l':
			printf("%.2f euros son %.2f libras.\n", euro, euro * GBP_PER_EUR);
		break;

		default:
			printf("Incorrect option. Please, select D/d, Y/y or L/l.\n");
	}
	
	return 0;
}
