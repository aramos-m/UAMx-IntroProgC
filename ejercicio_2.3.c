#include <stdio.h>

int main() {
        char sexo;
        int cp, hp, caramelos;
	double peso, altura;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("CP: ");
        scanf("%d", &cp);
        printf("HP: ");
        scanf("%d", &hp);
        printf("Peso: ");
        scanf("%lf", &peso);
        printf("Altura: ");
        scanf("%lf", &altura);
        printf("Caramelos: ");
        scanf("%d", &caramelos);

        printf("Tamaño variable sexo: %d\n", sizeof(sexo));
	printf("Tamaño variable CP: %d\n", sizeof(cp));
	printf("Tamaño variable HP: %d\n", sizeof(hp));
	printf("Tamaño variable peso: %d\n", sizeof(peso));
	printf("Tamaño variable altura: %d\n", sizeof(altura));
	printf("Tamaño variable caramelos: %d\n", sizeof(caramelos));
	
	return 0;
}
