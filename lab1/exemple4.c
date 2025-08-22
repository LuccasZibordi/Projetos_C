#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res,i,j;
    double frac,div,S;
    S=0;
    i=1;
    j=0;

    while (j<10)
    {
        frac=(double)1/i;
        res= i%2;

        if (res == 0)
        {
            S-= frac;
        }
        else
        {
            S+=frac;
        }
        i++;
        j++;
    }

    printf("O resultado S eh: %.10lf\n",S);




    return 0;
}
