#include <stdio.h>
#include <stdlib.h>

float calculo ( float x, float y, float z){
    return (x*x)+y+z;

}


int main () {

    float num1,num2,num3,r;


printf("Digite um numero: ");
scanf("%f",&num1);

printf("Digite um numero: ");
scanf("%f",&num2);

printf("Digite um numero: ");
scanf("%f",&num3);

r = calculo(num1,num2,num3);

printf("O resultado do calculo eh %2.f ",r);



return 0;}
