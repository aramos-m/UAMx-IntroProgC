#include <stdio.h>

int main(){
	double kaj [3][5] = {{651},{577},{494}};
	
	printf("Media experiencia últimas 5 partidas con Kassadin: %.2lf\n", (kaj[0][0]+kaj[0][1]+kaj[0][2]+kaj[0][3]+kaj[0][4])/5);
	printf("Media experiencia últimas 5 partidas con Ahri: %.2lf\n", (kaj[1][0]+kaj[1][1]+kaj[1][2]+kaj[1][3]+kaj[1][4])/5);
	printf("Media experiencia últimas 5 partidas con Jax: %.2lf", (kaj[2][0]+kaj[2][1]+kaj[2][2]+kaj[2][3]+kaj[2][4])/5);
	
	return 0;
}
