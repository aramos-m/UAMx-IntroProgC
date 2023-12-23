#include <stdio.h>

int main() {
        char c1, c2, c3, c4, c5;

        printf("Introduce un carácter: ");
        scanf("%c", &c1);
        printf("Introduce un segundo carácter: ");
        scanf("\n%c", &c2);
        printf("Introduce un tercer carácter: ");
        scanf("\n%c", &c3);
        printf("Introduce otro carácter: ");
        scanf("\n%c", &c4);
        printf("Introduce el último carácter: ");
        scanf("\n%c", &c5);

        printf("La palabra cifrada es: %c%c%c%c%c\n", c1, c2, c3, c4, c5);
	printf("La palabra cifrada es: %c%c%c%c%c", c1-3, c2-3, c3-3, c4-3, c5-3);

        return 0;
}
