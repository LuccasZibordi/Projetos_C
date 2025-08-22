#include<stdio.h>
#include<stdlib.h>

int comparacao(int v[], int x, int maior)
{
    if (x<0){
        return maior;
    }


    if ( v[x]>maior){
        maior=v[x];
    }


    return comparacao(v,x-1,maior);
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

    int  maximo= comparacao(vet,num-1,vet[num-1]);

    printf("\nO elemento de maior valor no vetor eh %d\n\n",maximo);




return 0;}
