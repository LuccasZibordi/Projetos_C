    #include <stdio.h>
    #include <stdlib.h>


int recursiva (int n){
    if(n==1){
        return 1;
    }
    if(n%2==0){

        n--;
    }
    return n+recursiva(n-2);
}

int interativo(int n){
    if (n <= 0){
    return 0;}

    int result = 0;
    int impar  = 1;
    do {
        result += impar;
        impar  += 2;
        n--;
    } while (n > 0);
    return result;

    }



    int main (){

        int num,i,res,ult;



        printf("Digite a quantidade de numeros impares a serem somados: ");
        scanf("%d",&num);

        ;

        res=recursiva(2*num);
        ult=interativo(num);

        printf("\n\n A soma eh %d\n\n",res);
        printf("\n\n A soma eh %d\n\n",ult);







    return 0;}

