#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;

int is_valid_date(Fecha date) {
	if (date.mes < 1 && date.mes > 12)
		return 0;
	if (date.mes == 4 || date.mes == 6 || date.mes == 9 || date.mes == 11)
		return (date.dia >= 1 && date.dia <= 30);
	else if (date.mes == 2) {
		if ((date.anyo % 4 == 0 && date.anyo % 100 != 0) || date.anyo % 400 == 0)
			return (date.dia >= 1 && date.dia <= 29);
		else
			return (date.dia >= 1 && date.dia <= 28);
	} else
		return (date.dia >= 1 && date.dia <= 31);
}

int main() {
    Fecha fecha1, fecha2;

    printf("Introduce un día, mes y año separados por espacios: ");
    scanf("%d %d %d", &fecha1.dia, &fecha1.mes, &fecha1.anyo);

    if (!is_valid_date(fecha1)) {
	    printf("Invalid input.\n");
	    return 1;
    }

    printf("Introduce otro día, mes y año separados por espacios: ");
    scanf("%d %d %d", &fecha2.dia, &fecha2.mes, &fecha2.anyo);

    if (!is_valid_date(fecha2)) {
	    printf("Invalid input.\n");
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
