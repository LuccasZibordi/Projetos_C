#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,qtd,mult,sum, res, mul,sobra;
double per;
    sum= 0;
    qtd=0;
    mul= 0;

    do
{
    printf("digita um numero: ");
    scanf("%d",&num);

    res = num % 3;

    if (res == 0)
    {
        if ( num > 10)
        {
            sum += num;
        }

        mult++;
    }

else
{
    res = num % 7;

        if ( sobra ==0)
    {
        mul++;
    }

}


    qtd++;
    per= qtd / mul ;

} while ( num >0);


    printf("\n A quantidade de numeros lidos eh: %d \n A soma dos numeros multiplos de 3: %d \n a quantidade dos numeros multiplos de 3 e maiores que 10: %d \n O percentual de numeros multiplos de 7: %.2f",qtd,sum,mult,per);



    return 0;

}
