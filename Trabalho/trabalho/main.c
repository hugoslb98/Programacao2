#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MATRIZTAM 9
#define NUMTOKEN 1

void escolherTokens(char tokens[]){
    
    do{
        puts("Jogador 1 introduza o seu token: ");
        scanf("%c", &tokens[0]);
        clean_buffer();

        puts("Jogador 2 introduza o seu token: ");
        scanf("%c", &tokens[1]);
        clean_buffer();
    }while(tokens[0] == tokens[1]);
    
}

void preencherMatriz(char matriz[][MATRIZTAM]){
    int i, j;
    
    for (i = 1; i < MATRIZTAM; ++i) {
        for (j = 1; j < MATRIZTAM; ++j){ 
            matriz[i][j] = '-';
        }
    }
}

int main(int argc, char** argv) {
    char matriz[MATRIZTAM][MATRIZTAM];
    char tokens[2];
    
    escolherTokens(tokens);
    preencherMatriz(matriz);
    escreverMatriz(matriz);
  
    return 0;
}

