#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct SNo{
        int chave;
        struct SNo *prox;
}SNo;

typedef struct Lista{
        SNo *Inicio;
        SNo *Fim;
}Lista;

Lista *crialista(){
        Lista *lista = (Lista *) (malloc(sizeof(Lista)));
        lista->Inicio = NULL;
        lista->Fim = NULL;

        return lista;
}

void enfileira(Lista *lista, int valor){
    SNo *Novo = (SNo *) malloc(sizeof(SNo));
    Novo->chave = valor;
    Novo->prox = NULL;

    if(lista->Inicio == NULL){
      lista->Inicio = Novo;
      lista->Fim = Novo;
      return;
    }else{
        lista->Fim->prox = Novo;
        lista->Fim = Novo;
        return;
    }
 }

void radixsort(int vet[], int tam_vet, Lista *vet_lista[], int tam_vet_lista){
   int i, j, k=0, maior,casa, cont=0, pos = 0,  w,exp = 1, num;

    // descobre o maior numero do vetor
    for(i=0; i< tam_vet; i++){
       if(i == 0){
        maior = vet[i];
       }else if (vet[i]>maior){
            maior = vet[i];
       }
    }

    //descobre a quantidade de casas do maior numero
    casa = maior;
    while(casa > 0){
        casa = (casa/10);
        cont++;
    }

   for(i=1;i<=cont;i++){
        exp = exp * 10;
        for(j=0;j<tam_vet;j++){
            num = vet[j]%exp;
            pos = num/(exp/10);
            enfileira(vet_lista[pos], vet[j]);
            }


        k=0;
        for(j=0;j<tam_vet_lista;j++){

            k = desenfileira(vet_lista[j], vet, k);
        }

        //Limpando o Vetor de listas!
        for(j=0;j<10;j++){
		vet_lista[j]->Inicio = NULL;
		vet_lista[j]->Fim = NULL;
        }
    }
}

int desenfileira(Lista *lista, int vet[],int cont) {
    SNo *Temp = lista->Inicio;
    SNo *Aux = NULL;

    if(lista->Inicio == NULL) {
        return cont;
    }else{
        while(Temp != NULL) {
        vet[cont]= Temp->chave;
        Aux = Temp;
        Temp = Temp->prox;
        cont++;
        free(Aux);
    }
    return cont;
   }
}

main(){

    int vet[10] = {231,403,3578,4556,12828,3,608889,1234,62098757,909},i;

    Lista *vet_lista[10];

    for(i=0;i<10;i++){
        vet_lista[i] = crialista();
    }

    printf("\n");
    printf("Antes de Ordenar Radix: ");

    for (i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
    printf("\n\n");
    radixsort(vet, 10, vet_lista, 10);

    printf("Depois de Ordenar Radix: ");
    for (i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
}
