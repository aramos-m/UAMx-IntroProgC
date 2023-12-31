#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;

int main() {
    Fecha fecha1, fecha2;

    printf("Introduce un día, mes y año separados por espacios: ");
    scanf("%d %d %d", &fecha1.dia, &fecha1.mes, &fecha1.anyo);
    if (fecha1.mes >= 1 && fecha1.mes <= 12) {
	    if (fecha1.mes == 2 && !(fecha1.dia >= 1 && fecha1.dia <= 29))
		    printf("Entrada no válida para la primera fecha\n");
	    else if (fecha1.mes == 1, 3, 5, 7, 8, 10, 12 && !(fecha1.dia >= 1 && fecha1.dia <= 31))
		    printf("Entrada no válida para la primera fecha\n");
	    else if (fecha1.mes == 4, 6, 9, 11 && !(fecha1.dia >= 1 && fecha1.dia <= 30))
		    printf("Entrada no válida para la primera fecha\n");
    return 1;
    }

    printf("Introduce otro día, mes y año separados por espacios: ");
    scanf("%d %d %d", &fecha2.dia, &fecha2.mes, &fecha2.anyo);
    if (fecha2.mes >= 1 && fecha2.mes <= 12) {
	    if (fecha2.mes == 2 && !(fecha2.dia >= 1 && fecha2.dia <= 29))
		    printf("Entrada no válida para la primera fecha\n");
	    else if (fecha2.mes == 1, 3, 5, 7, 8, 10, 12 && !(fecha2.dia >= 1 && fecha2.dia <= 31))
		    printf("Entrada no válida para la primera fecha\n");
	    else if (fecha2.mes == 4, 6, 9, 11 && !(fecha2.dia >= 1 && fecha2.dia <= 30))
		    printf("Entrada no válida para la primera fecha\n");
    return 1;
    }

    if (fecha1.anyo < fecha2.anyo)
        printf("La fecha %d/%d/%d es anterior a %d/%d/%d", fecha1.dia, fecha1.mes, fecha1.anyo, fecha2.dia, fecha2.mes, fecha2.anyo);
    else if (fecha1.anyo > fecha2.anyo)
        printf("La fecha %d/%d/%d es anterior a %d/%d/%d", fecha2.dia, fecha2.mes, fecha2.anyo, fecha1.dia, fecha1.mes, fecha1.anyo);
    else {
        if (fecha1.mes < fecha2.mes)
            printf("La fecha %d/%d/%d es anterior a %d/%d/%d", fecha1.dia, fecha1.mes, fecha1.anyo, fecha2.dia, fecha2.mes, fecha2.anyo);
        else if (fecha1.mes > fecha2.mes)
            printf("La fecha %d/%d/%d es anterior a %d/%d/%d", fecha2.dia, fecha2.mes, fecha2.anyo, fecha1.dia, fecha1.mes, fecha1.anyo);
        else {
            if (fecha1.dia < fecha2.dia)
                printf("La fecha %d/%d/%d es anterior a %d/%d/%d", fecha1.dia, fecha1.mes, fecha1.anyo, fecha2.dia, fecha2.mes, fecha2.anyo);
            else if (fecha1.dia > fecha2.dia)
                printf("La fecha %d/%d/%d es anterior a %d/%d/%d", fecha2.dia, fecha2.mes, fecha2.anyo, fecha1.dia, fecha1.mes, fecha1.anyo);
            else
                printf("Las dos fechas son iguales");
        }
    }
    return 0;
}
