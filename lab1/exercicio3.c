#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, i, impar,sum;
    impar=1;
    sum=0;

    printf("Digite um numero para receber seu quadrado: ");
    scanf("%d",&num);

    for (i=0; i<num; i++)
    {
        sum+=impar;
        impar+=2;

    }

    printf("O quadrado do seu numero eh: %d",sum);




    return 0;
}
