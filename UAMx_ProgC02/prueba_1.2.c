#include <stdio.h>

typedef struct {
	long long int num1;
	long long int num2;
	long long int num3;
} Numbers;

int main() {
	Numbers sort;

	printf("Introduce el primer número: ");
	if (scanf("%lld", &sort.num1) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Introduce el segundo número: ");
	if (scanf("%lld", &sort.num2) != 1) {
		printf("Invalid input.\n");
		return 1;
	}
	
	printf("Introduce el tercer número: ");
	if (scanf("%lld", &sort.num3) != 1) {
		printf("Invalid input.\n");
		return 1;
	}
		
	if (sort.num1 <= sort.num2 && sort.num1 <= sort.num3)
		printf("El número %lld es el menor\n", sort.num1);
	else if (sort.num2 <= sort.num1 && sort.num2 <= sort.num3)
		printf("El número %lld es el menor\n", sort.num2);
	else
		printf("El número %lld es el menor", sort.num3);
	return 0;
}
