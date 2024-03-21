#include <stdio.h>

//EXCHANGE TO DATE 21 MARCH 2024
#define USD_PER_EUR 1.09
#define JPY_PER_EUR 164.75
#define GBP_PER_EUR 0.86

int main() {
	float euro;
	int option;

	printf("Introduce una cantidad en euros: ");
	scanf("%f", &euro);

	printf("Selecciona una opción:\n 1. Dólar\n 2. Yen japonés \n 3. Libra esterlina\n");
	scanf("%d", &option);
	
	if (option < 1 || option > 3) {
		printf("Incorrect option. Please, select 1, 2 or 3.\n");
		return 1;
	}

	switch (option) {
		case 1:
			printf("%.2f euros son %.2f dólares.\n", euro, euro * USD_PER_EUR);
			break;
		case 2:				
			printf("%.2f euros son %.2f yenes.\n", euro, euro * JPY_PER_EUR);
			break;
		case 3:
			printf("%.2f euros son %.2f libras.\n", euro, euro * GBP_PER_EUR);
			break;
	}
	
	return 0;
}
