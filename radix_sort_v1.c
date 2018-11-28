#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//criação de uma estrutura de uma lista, que irá receber as palavras em forma de lista duplamente encadeada, onde cada nó será uma letra.
typedef struct Letra{
    char letra;
    int tamanho;
    struct Letra *prox;
 	struct Letra *ant;
}Letra;
 
 //criação de um TAD, que irá organizar as letras da minha palavra em forma de lista.
typedef struct Palavra{
    struct Letra *Inicio;
    struct Letra *Fim;
    struct Palavra *prox;
}Palavra;

//criação de um TAD, que irá organizar as palavras em uma frase por forma de lista.
typedef struct Frase{
	struct Palavra *Inicio;
	struct Palavra *Fim;
}Frase;
 
 //Função que aloca espaço na memória para cada uma das minhas palavras.
Palavra * criaPalavra(){
    
    Palavra *P =(Palavra *)malloc(sizeof(Palavra));
    P->Inicio = P->Fim = NULL;
  
    return P;
}

//Inserção das letras na Palavra.
void inserePalavra(char l, Palavra *P){
 
   		Letra *Novo = (Letra *)malloc(sizeof(Letra));
    	Novo->letra= l;
    	Novo->prox = Novo->ant = NULL;
 	 //  Novo->tamanho = strlen (palavra);
  
    	if (P->Inicio == NULL){
    	    P->Inicio = Novo;
    	}
    	else {
    	    P->Fim->prox = Novo;
    	    Novo->ant = P->Fim;
    	}
    	P->Fim = Novo;	
  }

void imprimeP(Palavra *P){
	Letra *temp  = P->Inicio;
	
	while(temp != NULL){
		printf("%c ->",temp->letra);
		temp = temp->prox;
	}
}

//Alocando espaço na memória para a frase.
Frase * criaFrase(){
    
    Frase *F = (Frase *)malloc(sizeof(Frase));
    F->Inicio = F->Fim = NULL;
  
    return F;
}

//Inserção das palavras na Frase.
void entradaFrase (Palavra *P, Frase *F){
	
	if(F->Inicio == NULL){
		F->Inicio =  P;
	}else{
		F->Fim->prox = P;
	}
	F->Fim = P;
}



/*void inserePalavra (char palavra, Fila *F){
	int qtdPalav, i;
	char palavra;
	printf("Informe a quantidade de palavras que serão inseridas: ");
    scanf("%i",&qtdPalav);
    printf("\n");
    for(i = 0; i < qtdPalav; i++){
    	fgets(palavra, 50, stdin);
    	enfileiraPalavra(palavra, F);
	}
}

int i;
Fila *vet_baldes[10];
    for(i=0;i<10;i++){
    vet_baldes[i] = criaFila();
}

 /*radixSort(){
	
    	
    	

}
*/

int main (){
	Palavra *P = criaPalavra();
	int i=0;
	char ent[50];
	fgets(ent,50,stdin);
	
	while(ent[i] != '\n'){
		inserePalavra(ent[i],P);
		i++;
	}
	
   	imprimeP(P);
 
 
}
