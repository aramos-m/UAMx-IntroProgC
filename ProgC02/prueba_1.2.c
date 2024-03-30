#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DIM 100

typedef struct {
	char num_str1[DIM];
	char num_str2[DIM];
	char num_str3[DIM];
} Numbers;

int is_valid_num(const char *str) {
    if (strlen(str) >= DIM)
        return 0;

    int i = 0;
    while (str[i] != '\0') {
        if (!isdigit(str[i])) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
	Numbers sort;

	printf("Introduce el primer número: ");
	scanf("%s", &sort.num_str1);

	if (!is_valid_num(sort.num_str1)) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Introduce el segundo número: ");
	scanf("%s", &sort.num_str2);
	
	if (!is_valid_num(sort.num_str2)) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Introduce el tercer número: ");
	scanf("%s", &sort.num_str3);

	if (!is_valid_num(sort.num_str3)) {
		printf("Invalid input.\n");
		return 1;
	}

	int num1 = atoi(sort.num_str1);
	int num2 = atoi(sort.num_str2);
	int num3 = atoi(sort.num_str3);
	
	if (num1 < num2) {
		if (num1 < num3)
			printf("El número %d es el menor\n", num1);
	} else if (num2 < num3)
		printf("El número %d es el menor\n", num2);
	else
		printf("El número %d es el menor\n", num3);
return 0;	
}
