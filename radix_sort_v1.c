#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SNo{
  
    char palavra[];
    int tamanho;
    struct SNo *prox;
 
} SNo;
 
typedef struct Fila{

    struct SNo *Inicio;
    struct SNo *Fim;
 
}Fila;
 
Lista criaFila (){
    
    Fila *F = (Lista *) malloc (sizeof (Lista));
    F->Inicio = F->Fim = NULL;
  
    return F;
}

void inserePalavra (char palavra, Fila *F){
  
    SNo *Novo = (SNo *) malloc (sizeof (SNo));
    Novo->palavra = palav;
    Novo->prox = NULL;
    Novo->tamanho = strlen (palavra);
  
    if (F->Inicio == NULL){
        F->Inicio = Novo;
    }
    else {
        F->Fim->prox = Novo;
    }
    F->Fim = Novo;
}

int main (){
    int i;
    Fila *vet_baldes[10];
    for(i=0;i<10;i++){
        vet_baldes[i] = criaFila();
    }

    
    char palav[];
  
 
    while (palavra[] != '.'){
    
 
    }

 
 
 
}
