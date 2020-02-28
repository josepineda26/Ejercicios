#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c;

printf("Introduce un numero: ");
scanf("%d", &a);
printf("Introduce otro numero: ");
scanf("%d", &b);

if (a%b==0){
    printf("El primer numero es divisible entre el otro");
}
else{
    printf("El primer numero no es divisible entre el otro");
}
}
