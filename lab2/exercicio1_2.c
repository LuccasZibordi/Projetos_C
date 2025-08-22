#include <stdio.h>
#include <stdlib.h>

void calculo(float x ,float y, float z, float *r){

*r = (x*x)+y+z;

}


int main (){
    float num1,num2,num3,g;

    printf("Digite um numero : ");
    scanf("%f",&num1);

    printf("Digite um numero : ");
    scanf("%f",&num2);

    printf("Digite um numero : ");
    scanf("%f",&num3);


   calculo(num1,num2,num3,&g);


    printf("O resultado da operacaoo eh: %2.f",g);






return 0;}
