#include<stdio.h>
#include<stdlib.h>


int somador (int v[],int x)
{
    if (x<0){
        return 0;
    }
    return v[x]+somador(v,x-1);

}


int main(){

  int num,valor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&num);

  int vet[num];

    for( int i=0; i<num; i++)
    {
        printf("\nDigite o valor da posicao %d do vetor de %d posicoes: ",i,num);
        scanf("%d",&valor);

        vet[i]=valor;

    }

  int soma = somador(vet,num-1);
 printf("\n O resultado da soma dos numero dentro do vetor eh %d\n\n",soma);





return 0;}
