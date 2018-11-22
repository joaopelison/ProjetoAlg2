#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct SNo{
	char palavra[];
	int tamanho;
	struct SNo *prox;
}SNo;

typedef struct Lista{
	struct SNo *Inicio;
	struct SNo *Fim;	
}Lista;

Lista criaLista(){
	Lista *L = (Lista *)malloc(sizeof(Lista));
	L->Inicio = L->Fim = NULL;
	return L;
}

void inserePalavra(char palavra, Lista *L){
	SNo *Novo = (SNo *)malloc(sizeof(SNo));
	Novo->palavra = palav;
	Novo->prox = NULL;
	Novo->tamanho = strlen(palavra);
	if(L->Inicio == NULL){
		L->Inicio = Novo;
	}else{
		L->Fim->prox = Novo;
	}
	L->Fim = Novo;
}

int main(){
	
	char palav[];
	
	while(palavra[] != '.'){
		
		
		
	}
	
	
		
}
