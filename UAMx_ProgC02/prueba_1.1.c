#include <stdio.h>

typedef struct {
	int	dia;
	int	mes;
	int	anyo;
} Fecha;

int is_valid_date(Fecha date) {
    if (date.mes < 1 && date.mes > 12)
	    return 0;
    
    switch (date.mes) {
	    case 4:
	    case 6:
	    case 9:
            case 11:
		    return (date.dia >= 1 && date.dia <= 30);
	    case 2:
		    if ((date.anyo % 4 == 0 && date.anyo % 100 != 0) || date.anyo % 400 == 0)
			    return (date.dia >= 1 && date.dia <= 29);
		    else
			    return (date.dia >= 1 && date.dia <= 28);
	    default:
		    return (date.dia >= 1 && date.dia <= 31);
    }
}

int main() {
	Fecha bday1, bday2;

	printf("Introduce la fecha de nacimiento del primer usuario separada por espacios: ");
	scanf("%2d %2d %d", &bday1.dia, &bday1.mes, &bday1.anyo);
	
	if (!is_valid_date(bday1)) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Introduce la fecha de nacimiento del segundo usuario separada por espacios: ");
	scanf("%2d %2d %d", &bday2.dia, &bday2.mes, &bday2.anyo);

	if (!is_valid_date(bday2)) {
		printf("Invalid input.\n");
		return 1;
	}

	if (bday1.dia == bday2.dia && bday1.mes == bday2.mes && bday1.anyo == bday2.anyo)
		printf("¡Felicidades! Ambos habéis nacido el mismo día.\n");
	else if (bday1.dia == bday2.dia && bday1.mes == bday2.mes && bday1.anyo != bday2.anyo)
		printf("Ambos cumplís años el mismo día. Os lleváis %d años de diferencia.\n", bday1.anyo - bday2.anyo);
	else 
		printf("Vaya, no compartís cumpleaños.");
	return 0;
}
