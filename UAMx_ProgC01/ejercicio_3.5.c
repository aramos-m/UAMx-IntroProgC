#include <stdio.h>

int main(){
    char flota [3][2] = {{'X','O'},{'O','X'},{'X','X'}};
    int fila, columna;
    
    printf("Introduce una fila: ");
    scanf("%d", &fila);
    
    printf("Introduce una columna: ");
    scanf("%d", &columna);
    
    printf("En la fila %d, columna %d encontramos: %c\n", fila, columna, flota[fila-1][columna-1]);
    
    printf("Introduce una fila: ");
    scanf("%d", &fila);
    
    printf("Introduce una columna: ");
    scanf("%d", &columna);
    
    printf("En la fila %d, columna %d encontramos: %c", fila, columna, flota[fila-1][columna-1]);
    
    return 0;
}
