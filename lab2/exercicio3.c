#include <stdio.h>
#include <stdlib.h>

void serie(int i, int j, int k) {
    if (k == 0) return;
    if ((k > 0 && i > j) || (k < 0 && i < j)) return;

    printf("%d\n", i);
    serie(i + k, j, k);
}

int main  (){

    serie(2,10,2);

return 0;}
