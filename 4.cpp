#include <stdio.h>
#include <stdlib.h>

int main() {

int a,b;

printf("Introduzca un numero: ");
scanf("%d", &a);
printf("Introduzca otro numero: ");
scanf("%d", &b);

if (a<b) {
printf("El segundo numero es mayor que el primero");
}
if(a>b){
printf("El primer numero es mayor que el segundo");
}
if(a==b){
printf("Ambos numeros son iguales");
}
}
