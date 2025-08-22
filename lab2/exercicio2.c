#include <stdio.h>
#include <stdlib.h>

int fatorial(int num)
{
    if (num==1){
        return 1;
    }

    return num*fatorial(num-1);
}




int main (){

    int x, y, z,r1,r2,r3;


    printf("Digite um numero para receber o seu fatorial: ");
    scanf("%d",&x);

    printf("Digite um numero para receber o seu fatorial: ");
    scanf("%d",&y);

    printf("Digite um numero para receber o seu fatorial: ");
    scanf("%d",&z);


    r1=fatorial(x);
    r2=fatorial(y);
    r3=fatorial(z);




    printf("O fatorial do numero %d eh %d\n",x,r1);
    printf("O fatorial do numero %d eh %d\n",y,r2);
    printf("O fatorial do numero %d eh %d\n",z,r3);






return 0;}
