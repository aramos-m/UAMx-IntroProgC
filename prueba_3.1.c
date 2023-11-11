#include <stdio.h>
#define DIM 6

int main() {
	int nbr[DIM], mod;
	double avg_even, avg_odd;

	printf("Introduce el primer número entero: ");
	scanf("%d", &nbr[0]);

	printf("Introduce el segundo número entero: ");
	scanf("%d", &nbr[1]);

	printf("Introduce el tercer número entero: ");
	scanf("%d", &nbr[2]);

	printf("Introduce el cuarto número entero: ");
	scanf("%d", &nbr[3]);

	printf("Introduce el quinto número entero: ");
	scanf("%d", &nbr[4]);

	printf("Introduce el sexto número entero: ");
	scanf("%d", &nbr[5]);

	avg_even = (nbr[0]+nbr[2]+nbr[4])/(double)3;
	avg_odd = (nbr[1]+nbr[3]+nbr[5])/(double)3;
	mod = nbr[5]%nbr[0];

	printf("La media de los números %d, %d y %d es %.6lf\n", nbr[0], nbr[2], nbr[4], avg_even);
	printf("La media de los números %d, %d y %d es %.6lf\n", nbr[1], nbr[3], nbr[5], avg_odd);
	printf("El resto de la división de %d y %d es %d", nbr[5], nbr[0], mod);

	return 0;
}
