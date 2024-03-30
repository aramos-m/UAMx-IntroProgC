#include <stdio.h>

//EXCHANGE TO DATE 21 MARCH 2024
#define USD_PER_EUR 1.09
#define JPY_PER_EUR 164.75
#define GBP_PER_EUR 0.86
#define DIM 100

enum {dolar=1, yen, libra};

int main() {
	float	euro;
	char	option_str[DIM];
	int	option;

	printf("Introduce una cantidad en euros: ");
        if (scanf("%lf", &euro) != 1) {
                printf("Invalid input.\n");
                return 1;
        }	
	
	printf("Selecciona una opción:\n 1. Dólar\n 2. Yen japonés\n 3. Libra esterlina\n");
	scanf("\n%s", &option_str);
	
	if (option_str[0] > '0' && option_str[0] < '4' && option_str[1] == '\0') {
		option = option_str[0] - '0';
		switch (option) {
			case dolar:
				printf("%.2lf euros son %.2lf dólares.\n", euro, euro * USD_PER_EUR);
				break;
			case yen:
				printf("%.2lf euros son %.2lf yenes.\n", euro, euro * JPY_PER_EUR);
				break;
			case libra:
				printf("%.2lf euros son %.2lf libras.\n", euro, euro * GBP_PER_EUR);
				break;
		}
		return 0;
	}
	else
		printf("Invalid input. Select 1, 2 or 3.\n");
	return 1;
}
