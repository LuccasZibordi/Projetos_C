#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,dig,sum,alx,aux;
    sum=2;
    alx=0;
    aux=0;

    printf("DIgite um numero para ser somado a sequencia: ");
    scanf("%d",&dig);



    for(i=0; i<dig;i++)
    {
        alx=aux;
        aux=sum;

        if(sum==2)
        {
            sum+=3;
        }
        else{
            sum +=alx;
        }
    }



printf("A soma da sequencia com o numero %d foi %d",dig,sum);





    return 0;
}
