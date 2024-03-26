#include <stdio.h>
#include <float.h>

//EXCHANGE TO DATE 21 MARCH 2024
#define USD_PER_EUR 1.09
#define JPY_PER_EUR 164.75
#define GBP_PER_EUR 0.86
#define DIM 100

int main() {
	float euro;
	char option[DIM];

	printf("Introduce una cantidad en euros: ");
	scanf("%f", &euro);

	if (euro < FLT_MIN || euro > FLT_MAX) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Selecciona una opción:\n 1. Dólar\n 2. Yen japonés\n 3. Libra esterlina\n");
	scanf("\n%s", &option);
	
	if (option[0] > '0' && option[0] < '4' && option[1] == '\0') {
		switch (option[0]) {
			case '1':
				printf("%.2f euros son %.2f dólares.\n", euro, euro * USD_PER_EUR);
				break;
			case '2':
				printf("%.2f euros son %.2f yenes.\n", euro, euro * JPY_PER_EUR);
				break;
			case '3':
				printf("%.2f euros son %.2f libras.\n", euro, euro * GBP_PER_EUR);
				break;
		}
		return 0;
	}
	else
		printf("Invalid input. Select 1, 2 or 3.\n");
	return 1;
}
