#include <stdio.h>

int main(){
	float luna = 0.1655, marte = 0.3895, jupiter = 2.640, miller = 1.3, pandora = 0.8, vulcano = 1.4, peso;
	const int peso_tierra = 1;
	
	printf("Introduce tu peso: ");
	scanf("%f", &peso);

	printf("Tu peso en la Tierra es %.2f kg.\n", peso);
	printf("Tu peso en la luna es %.2f kg.\n", (luna*peso/peso_tierra));
	printf("Tu peso en Marte es %.2f kg.\n", (marte*peso/peso_tierra));
	printf("Tu peso en Júpiter es %.2f kg.\n", (jupiter*peso/peso_tierra));
	printf("Tu peso en el planeta Miller es %.2f kg.\n", (miller*peso/peso_tierra));
	printf("Tu peso en Pandora es %.2f kg.\n", (pandora*peso/peso_tierra));
	printf("Tu peso en Vulcano es %.2f kg.", (vulcano*peso/peso_tierra));

	return (0);  
}
