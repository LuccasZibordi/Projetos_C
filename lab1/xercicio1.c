#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,res,div,count;

    count=0;

    printf("Digite um numero inteiro que sera analisado: ");
    scanf("%d",&num);

    div = num;
    for ( int i=0; i<=num; i++)
    {
        res =  div % 10;

        if ( res == 7)
        {
             count ++;
        }
        num /= 10;
    }

    printf ( "A quantidade de digitos 7 do numero %d eh %d",num, count);



return 0;

}
