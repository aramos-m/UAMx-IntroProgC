#include <stdio.h>

int main(){
	double k[] = {130, 130, 130, 130, 131};
	double a[] = {115.4, 115.4, 115.4, 115.4, 115.4};
	double j[5] = {494};

	printf("Media experiencia últimas 5 partidas con Kassadin: %.2lf\n", (k[0]+k[1]+k[2]+k[3]+k[4])/5);
	printf("Media experiencia últimas 5 partidas con Ahri: %.2lf\n", (a[0]+a[1]+a[2]+a[3]+a[4])/5);
	printf("Media experiencia últimas 5 partidas con Jax: %.2lf", (j[0]+j[1]+j[2]+j[3]+j[4])/5);
	
	return 0;
}
