#include <stdio.h>

int main() {
	double dolares;
	double euros;

	printf("Introduzca cantidad en dólares: ");
	scanf("%lf", &dolares);

	euros = dolares * 0.859;
	printf("%.2lf dólares son %.2lf euros.\n", dolares, euros);

	return 0;
}
