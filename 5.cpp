#include <stdlib.h>
#include <stdio.h>

int main() {

	int edad, a, b;

	printf("introduzca su edad: ");
	scanf("%d", &edad);

	if (edad<10){
		a=75*.4;
		printf("Usted pagara: %d",a);
	}
	else if (edad>60){
        b=75*.45;
		printf("Usted pagara: %d", b);
	}
	else if (edad>=10){
        printf("Usted pagara: 75");
	}
}
