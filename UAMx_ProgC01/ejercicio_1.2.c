#include <stdio.h>

int main() {
	double tiempo1, precio1, tiempo2, precio2, tiempo3, precio3, tiempo4, precio4, tiempo5, precio5, total;

	printf("Piensa en los últimos cinco juegos que has jugado.\n¿Cuántas horas le has echado al primero de ellos? ");
	scanf("%lf", &tiempo1);
	printf("¿Y cuánto te costó? ");
	scanf("%lf", &precio1);
	printf("¿Cuántas horas le has echado al segundo? ");
	scanf("%lf", &tiempo2);
	printf("¿Y cuánto te costó? ");
	scanf("%lf", &precio2);
	printf("¿Cuántas horas le has echado al tercero? ");
	scanf("%lf", &tiempo3);
	printf("¿Y cuánto te costó? ");
	scanf("%lf", &precio3);
	printf("¿Cuántas horas le has echado al cuarto? ");
	scanf("%lf", &tiempo4);
	printf("¿Y cuánto te costó? ");
	scanf("%lf", &precio4);
	printf("¿Cuántas horas le has echando al quinto? ");
	scanf("%lf", &tiempo5);
	printf("¿Y cuánto te costó? ");
	scanf("%lf", &precio5);

	total = (precio1/tiempo1 + precio2/tiempo2 + precio3/tiempo3 + precio4/tiempo4 + precio5/tiempo5) / 5;
	
	printf("¡Los últimos 5 juegos te han salido a %lf euros la hora!", total);

	return 0;
}
