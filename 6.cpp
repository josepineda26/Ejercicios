#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

int a,b,x;

    printf("Introduza un valor para x: ");
    scanf("%d", &x);

if (x<=0){
    a=x+3;
    printf("El valor es: %d", a);
}
else if (x>0){
    b=pow(x,2)+2*x;
    printf("El valor es: %d", b);
}
}
