#include <stdio.h>

int main(){
	int age;

	printf("Introduce tu edad: ");
	scanf("%d", &age);

	if (age < 18)
		printf("Eres menor de edad\n");
	else if (age >= 18 && age % 3 == 0)
		printf("Eres mayor de edad y tu edad es múltiplo de tres\n");
	else if (age >= 18 && age % 3 != 0)
		printf("Eres mayor de edad y tu edad no es múltiplo de tres");
	return 0;
}
