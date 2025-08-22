#include <stdio.h>
#include <stdlib.h>

void limpaBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void pausa(){
    printf("\nPressione ENTER para continuar...");
    // garante que não há lixo pendente
    limpaBuffer();
    getchar();
}

typedef struct no{

int info;
struct no *prox;

}No;
typedef No Lista;


Lista * inicia(){

return NULL;
}


Lista *Insere(Lista * receba, int valor){
    Lista * novo;
    novo = (Lista*)malloc(sizeof(Lista));

    if (novo != NULL){
        novo ->info= valor;
        novo ->prox= receba;
        return novo;

    }
return receba;

}

Lista *Nofim(Lista *receba, int valor){

    Lista *aux;
    Lista *novo;
    aux=receba;
    novo = (Lista*)malloc(sizeof(Lista));
        novo->info=valor;
        novo->prox=NULL;

        if(aux !=NULL){

    while(aux->prox!=NULL){
        aux=aux->prox;

    }

    aux->prox=novo;}

        else{
            receba=novo;
        }
        return receba;



}


 Lista * apague(Lista *guarda){

    Lista * apagador;

    while(guarda !=NULL){
        apagador=guarda;
        guarda=guarda->prox;
        free(apagador);
    }

    return guarda;

}


Lista*erasefirst(Lista *first)
{
    Lista * aux;

    aux=first;
    first=first->prox;
    free(aux);

    return first;
}

Lista*eraseLast(Lista *Last)
{
    Lista * aux;
    Lista * aux2;
    aux=Last;
    aux2=aux->prox;

    if(aux == NULL){
        printf("\n\nA lista esta vazia..\n\n");
        return Last;
    }
    else{
    while(aux2->prox !=NULL){
        aux=aux->prox;
        aux2=aux2->prox;

    }
        aux->prox=NULL;
        free (aux);
        return Last;
    }
}


void impressao(Lista *comeco){

    printf("\n\nEsta eh a lista atual: \n\n");

    if(comeco == NULL){

        printf("\nA Lista estah vazia...\n\n");
    }
else {

    for(;comeco!=NULL;comeco=comeco->prox){

        printf("%d -> ",comeco->info);

    }
}

}



int busca(Lista *position,int num){

    while(position!=NULL){

        if(position->info==num){
            return 1;
        }

        else{
            position=position->prox;
        }
    }

return 0;}

int impar(Lista *pos){
    int cont=0;

    if(pos ==NULL){
        printf("\nNao ha nenhum numero na lista...");
        return 0;
    }
    else{
        while(pos !=NULL){
            if(pos->info%2!=0){
                cont++;
            }
            pos=pos->prox;
        }
        return cont;
    }



}

int tavazia(Lista *comeco){
    if(comeco==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int qtd(Lista *inicio){

    int count=0;
    do{

    if(inicio==NULL){
        return 0;
    }
        count++;
        inicio=inicio->prox;


    }while(inicio!=NULL);

    return count;

}

int soma(Lista *comeco){
    int sum=0;

    while(comeco!=NULL){
        if(comeco==NULL){
            return 0;
        }
        else{
        sum+=comeco->info;
        comeco=comeco->prox;
        }
    }

return sum;
}

Lista *junta(Lista *once, Lista *twice) {
    Lista *uniao = NULL;


    for (Lista *p = once; p != NULL; p = p->prox) {
        if (!busca(uniao, p->info)) {
            uniao = Nofim(uniao, p->info);
        }
    }


    for (Lista *p = twice; p != NULL; p = p->prox) {
        if (!busca(uniao, p->info)) {
            uniao = Nofim(uniao, p->info);
        }
    }

    return uniao;
}





int menu(void){
    system("cls");
    int num;
    printf("\n||0- sair                                        ||\n");
    printf("||1- inserir um numero no começo da lista        ||\n");
    printf("||2- inserir um numero fim da lista              ||\n");
    printf("||3- apagar o primeiro elemento da lista         ||\n");
    printf("||4- apagar o ultimo elemento da lista           ||\n");
    printf("||5- apagar a lista inteira                      ||\n");
    printf("||6- achar um elemento da lista                  ||\n");
    printf("||7- verificar se a lista esta vazia             ||\n");
    printf("||8- verificar quantos elementos tem a lista     ||\n");
    printf("||9- somar todos os elementos da lista           ||\n");
    printf("||10- quantidade de numeros impares na lista     ||\n");
    printf("||11- juntar as duas listas e criar uma nova     ||\n");
    printf("||12- imprimir a lista                           ||\n\n");
    printf("Escolha uma das opcoes do menu: ");
    scanf("%d",&num);
    limpaBuffer();
    return num;
}


int main (){

    int num=1,valor,sim,escolha;
    Lista *Inicio;
    Lista *Beginning;
    Lista *Debut;

    Inicio = inicia();
    Beginning = inicia();
    Debut = inicia();

do {
    num=menu();
    switch(num){

case 1:
    printf("\n Selecione a lista (1/2): ");
    scanf("%d",&escolha);
    printf("\nInsira um numero no comeco da lista: ");
    scanf("%d",&valor);
    if (escolha ==1){
    Inicio=Insere(Inicio,valor);}
    else{
        Beginning=Insere(Beginning,valor);
    }
    limpaBuffer();
    pausa();
    break;
case 2:
    printf("\n Selecione a lista (1/2): ");
    scanf("%d",&escolha);
    printf("\nInsira um numero do final da lista: ");
    scanf("%d",&valor);
    if(escolha ==1){
    Inicio=Nofim(Inicio,valor);
    }
    else{
        Beginning=Nofim(Beginning,valor);
    }
    pausa();
    break;

case 3:
    printf("\n Selecione a lista (1/2): ");
    scanf("%d",&escolha);
    printf("Primeira posicao apagada\n");
    if(escolha==1){
    Inicio=erasefirst(Inicio);
    }
    else{
        Beginning=erasefirst(Beginning);
    }
    pausa();
    break;

case 4:
    printf("\n Selecione a lista (1/2): ");
    scanf("%d",&escolha);
    printf("\nO Ultimo elemento foi apagado..\n");
    if(escolha==1){
        Inicio= eraseLast(Inicio);
    }
    else{
     Beginning=eraseLast(Beginning);
    }
    pausa();
    break;

case 5:
    printf("\n Selecione a lista (1/2): ");
    scanf("%d",&escolha);
    printf("\nlista apagada\n");
    if(escolha==1){
    Inicio=apague(Inicio);}
    else{
        Beginning=apague(Beginning);
    }
    pausa();
    break;

case 6:
    printf("\n Selecione a lista (1/2): ");
    scanf("%d",&escolha);
    printf("\n Digite qual numero voce quer achar: \n\n");
    scanf("%d",&valor);
    if(escolha==1){
    sim=busca(Inicio,valor);}
    else{
        sim=busca(Beginning,valor);
    }
    if(sim==1){
        printf("\n Esse numero existe em algum lugar da lista...\n\n");
    }
    else{
        printf("\n\nInfelizmente esse numero nao esta entre nos...\n\n");
    }
    pausa();
    break;

case 7:
    printf("\n Selecione a lista (1/2): ");
    scanf("%d",&escolha);
    printf("\nVerificando...\n\n");
    if(escolha==1){
    sim=tavazia(Inicio);}
    else{
        sim=tavazia(Beginning);
    }
        if(sim==1){
        printf("\n...cri..cri..cri..\n\n");
    }
    else{
        printf("\n\nLotada de coisa mane\n\n");
    }
    pausa();

    break;

case 8:
    printf("\n Selecione a lista (1/2): ");
    scanf("%d",&escolha);
    printf("\n Verificando...");
    if(escolha==1){
    valor=qtd(Inicio);}
    else{
        valor=qtd(Beginning);
    }
    printf("\n\n A quantidade de elementos na lista eh %d!",valor);
    pausa();
    break;

case 9:
    printf("\n Selecione a lista (1/2): ");
    scanf("%d",&escolha);
    printf("\n Somando numeros...\n\n");
    if(escolha==1){
    valor=soma(Inicio);}
    else{
        valor=soma(Beginning);
    }
    printf("\n A Soma dos elementos da lista eh %d",valor);
    pausa();
    break;

case 10:
    printf("\n Selecione a lista (1/2): ");
    scanf("%d",&escolha);
    if(escolha==1){
    valor=impar(Inicio);}
    else{
        valor=impar(Beginning);
    }
    printf("\nO numero de elementos impares na lista eh %d",valor);
    pausa();
    break;

case 11:
    printf("\nJuntando as listas...");
    Debut=junta(Inicio,Beginning);
    pausa();
    break;

case 12:
    printf("\n Selecione a lista (1/2/3) ou todas (4): ");
    scanf("%d",&escolha);
    if(escolha==1){
    impressao(Inicio);}
    if(escolha==2){
        impressao(Beginning);
    }
    if(escolha==3){
        impressao(Debut);
    }
    else{
            impressao(Inicio);
            impressao(Beginning);
            impressao(Debut);

    }
    pausa();
    break;

    }

    }while (num!=0);


return 0;}
