#include <stdio.h>
#include <stdlib.h>

int main (){
int a;

printf(" Introduzca un numero: ");
scanf("%d", &a);
if (a%2==0){
    printf(" El numero es par");
}
else{
    printf(" El numero es impar");
}
if (a%3==0){
    printf("\n Es divisible entre 3");
}
}
