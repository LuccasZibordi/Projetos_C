#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num,i,res,par,qtd5,qtdpar,vet[15];
    qtd5=0;
    qtdpar=0;

    for(i=0;i<15;i++)
    {
        printf("Digite o numero da %d posicao do vetor: ",i);
        scanf("%d",&num);

        vet[i]=num;

        res= num%5;
        par=num%2;

        if (par == 0)
        {
            qtdpar++;
        }
        if (res==0)
        {
            qtd5++;
        }
        if (num==0)
        {
            qtd5--;
            qtdpar--;
        }
    }


    printf("A quantidade de numeros pares dentro do vetor eh: %d \n",qtdpar);
    printf("A quantidade de numeros multiplos de 5 dentro do vetor eh: %d\n",qtd5);




    return 0;
}
