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
	    if (fecha1.mes == 2) {
		    if ((fecha1.anyo % 4 != 0 && !(fecha1.dia >= 1 && fecha1.dia <= 28)) || (!(fecha1.anyo % 4) && !(fecha1.dia >= 1 && fecha1.dia <= 29))) {
			    printf("Entrada no válida para la primera fecha\n");
			    return 1;
		    }
	    } else if ((fecha1.mes == 1 || fecha1.mes == 3 || fecha1.mes == 5 || fecha1.mes == 7 || fecha1.mes == 8 || fecha1.mes == 10 || fecha1.mes == 12) && !(fecha1.dia >= 1 && fecha1.dia <= 31)) {
		    printf("Entrada no válida para la primera fecha\n");
		    return 1;
	    } else if ((fecha1.mes == 4 || fecha1.mes == 6 || fecha1.mes == 9 || fecha1.mes == 11) && !(fecha1.dia >= 1 && fecha1.dia <= 30)) {
		    printf("Entrada no válida para la primera fecha\n");
		    return 1;
	    }
    } else {
	    printf("Entrada no válida para la primera fecha\n");
	    return 1;
    }

    printf("Introduce otro día, mes y año separados por espacios: ");
    scanf("%d %d %d", &fecha2.dia, &fecha2.mes, &fecha2.anyo);
    if (fecha2.mes >= 1 && fecha2.mes <= 12) {
	    if (fecha2.mes == 2) {
		    if ((fecha2.anyo % 4 != 0 && !(fecha2.dia >= 1 && fecha2.dia <= 28)) || (!(fecha2.anyo % 4) && !(fecha2.dia >= 1 && fecha2.dia <= 29))) {
			    printf("Entrada no válida para la primera fecha\n");
			    return 1;
		    }
	    } else if ((fecha2.mes == 1 || fecha2.mes == 3 || fecha2.mes == 5 || fecha2.mes == 7 || fecha2.mes == 8 || fecha2.mes == 10 || fecha2.mes == 12) && !(fecha2.dia >= 1 && fecha2.dia <= 31)) {
		    printf("Entrada no válida para la primera fecha\n");
		    return 1;
	    } else if ((fecha2.mes == 4 || fecha2.mes == 6 || fecha2.mes == 9 || fecha2.mes == 11) && !(fecha2.dia >= 1 && fecha2.dia <= 30)) {
		    printf("Entrada no válida para la primera fecha\n");
		    return 1;
	    }
    } else {
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
