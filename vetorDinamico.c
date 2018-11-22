//
//  vetorDinamico.c
//  
//
//  Created by mac on 21/11/18.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
   
    int *vetor;
    int maiorValor, j,i;
    
    maiorValor = 10;
    vetor = calloc(maiorValor, sizeof(int));
    
    /*
    vetor[0] = 0;
    vetor[1] = 1;
    vetor[2] = 2;
    vetor[3] = 3;
    vetor[4] = 4;
    vetor[5] = 5;
    vetor[6] = 6;
    vetor[7] = 7;
    vetor[8] = 8;
    vetor[9] = 9;
    
    for (i = 0; i < 10; i++)
        *(vetor + i) = -1;
    */
    
    for (i = 0; i < 10; i++)
        vetor[i] = i;
    
    for (i = 0; i < 10; i++)
        printf("*(vetor + %d) = %d\n", i, *(vetor+i));
    
    printf("%d ", *(vetor+4));
    
    for (j=0; j<maiorValor; j++) {
        printf("%i ", vetor[j]);
    }
    printf("\n");
    
    return 0;
}
