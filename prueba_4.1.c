#include <stdio.h>

#define DIMS 3
#define DIMR 2

typedef struct {
    int numeros[DIMS];
    int suma;
} Suma;

typedef struct {
    Suma tabla[DIMR];
    int modulo;
} Resto;

int main() {
    Resto x;
    
    printf("Introduce el primer entero de la primera tabla: ");
    scanf("%d", &x.tabla[0].numeros[0]);
    printf("Introduce el segundo entero de la primera tabla: ");
    scanf("%d", &x.tabla[0].numeros[1]);
    printf("Introduce el tercer entero de la primera tabla: ");
    scanf("%d", &x.tabla[0].numeros[2]);
    
    x.tabla[0].suma = x.tabla[0].numeros[0] + x.tabla[0].numeros[1] + x.tabla[0].numeros[2];
    
    printf("Introduce el primer entero de la segunda tabla: ");
    scanf("%d", &x.tabla[1].numeros[0]);
    printf("Introduce el segundo entero de la segunda tabla: ");
    scanf("%d", &x.tabla[1].numeros[1]);
    printf("Introduce el tercer entero de la segunda tabla: ");
    scanf("%d", &x.tabla[1].numeros[2]);
    
    x.tabla[1].suma = x.tabla[1].numeros[0] + x.tabla[1].numeros[1] + x.tabla[1].numeros[2];

    x.modulo = x.tabla[0].suma % x.tabla[1].suma;
    
    printf("La suma de los elementos de la primera tabla es %d.\n", x.tabla[0].suma);
    printf("La suma de los elementos de la segunda tabla es %d.\n", x.tabla[1].suma);
    printf("El resto de la división de ambas sumas es %d.", x.modulo);
    
    return 0;
}
