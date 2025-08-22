#include<stdio.h>
#include<stdlib.h>

typedef struct informacoes{
    int codigo,estoque;
    float compra,venda;

}info;




int main(){
        int tam=10;
        info produto[10];


        for(int i=0; i<tam; i++){


            printf("\nDigite o codigo de 3 digitos do produto %d: ",i);
            scanf("%d",&produto[i].codigo);

            printf("\nDigite a quantidade do produto %d no estoque: ",i);
            scanf("%d",&produto[i].estoque);

            printf("\nDigite o valor de compra do produto %d: ",i);
            scanf("%f",&produto[i].compra);

            printf("\nDigite o valor de venda do produto %d: ",i);
            scanf("%f",&produto[i].venda);
        }
        int   codigoq = produto[0].codigo;
        int   maior   = produto[0].estoque;

        float lucro   = (produto[0].venda - produto[0].compra) * produto[0].estoque;
        int   quant   = produto[0].estoque;

        for (int j = 1; j < tam; j++) {

        if (produto[j].estoque > maior) {
            maior   = produto[j].estoque;
            codigoq = produto[j].codigo;
        }

        float lucro_j = (produto[j].venda - produto[j].compra) * produto[j].estoque;
        if (lucro_j > lucro) {
            lucro = lucro_j;
            quant = produto[j].estoque;
        }
    }

    printf("\n\nA Quantidade do produto mais lucrativo eh %d\n",quant);

    printf("Codigo do produto com maior estoque eh %d\n",codigoq);



return 0;}
