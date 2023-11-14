#include <stdio.h>

#define DIM_TABLA 3
#define DIM_SUMAS 2

typedef struct {
    int tabla[DIM_TABLA];
    int suma;
} Suma;

typedef struct {
    Suma sumas[DIM_SUMAS];
    int modulo;
} Resto;

int main() {
    Resto operacion;
    
    printf("Introduce el primer entero de la primera tabla: ");
    scanf("%d", &operacion.sumas[0].tabla[0]);
    printf("Introduce el segundo entero de la primera tabla: ");
    scanf("%d", &operacion.sumas[0].tabla[1]);
    printf("Introduce el tercer entero de la primera tabla: ");
    scanf("%d", &operacion.sumas[0].tabla[2]);
    
    operacion.sumas[0].suma = operacion.sumas[0].tabla[0]+operacion.sumas[0].tabla[1]+operacion.sumas[0].tabla[2];
    
    printf("Introduce el primer entero de la segunda tabla: ");
    scanf("%d", &operacion.sumas[1].tabla[0]);
    printf("Introduce el segundo entero de la segunda tabla: ");
    scanf("%d", &operacion.sumas[1].tabla[1]);
    printf("Introduce el tercer entero de la segunda tabla: ");
    scanf("%d", &operacion.sumas[1].tabla[2]);
    
    operacion.sumas[1].suma = operacion.sumas[1].tabla[0]+operacion.sumas[1].tabla[1]+operacion.sumas[1].tabla[2];

    operacion.modulo = operacion.sumas[0].suma%operacion.sumas[1].suma;
    
    printf("La suma de los elementos de la primera tabla es %d.\n", operacion.sumas[0].suma);
    printf("La suma de los elementos de la segunda tabla es %d.\n", operacion.sumas[1].suma);
    printf("El resto de la división de ambas sumas es %d.", operacion.modulo);
    
    return 0;
}