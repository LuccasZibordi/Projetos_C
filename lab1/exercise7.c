#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,count,num,vet[8];

    printf("Construindo um vetor!\n");

    for(i=0;i<8;i++)
    {
        printf("Digite o numero da posicao %d do vetor:  ",i);
        scanf("%d",&num);
        vet[i]=num;

    }

    printf("\no vetor gerado foi: ");
    for(i=0;i<8;i++)
    {
        printf("| %d |",vet[i]);

        num=vet[i];

        if(num>30)
        {
            count++;
        }

    }

    printf("\n A quantidade de numeros maiores do que 30 dentro do vetor eh: %d\n\n",count);



    return 0;
}
