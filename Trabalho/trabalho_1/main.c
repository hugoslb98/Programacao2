#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MATRIZTAM 10
#define NUMTOKEN 1

//funcao para os jogadores escolherem os tokens
void escolherTokens(char tokens[]){
    
    do{
        puts("Jogador 1 introduza o seu token: ");
        scanf("%c", &tokens[0]);
        clean_buffer(); //funcao para limpar o Buffer

        puts("Jogador 2 introduza o seu token: ");
        scanf("%c", &tokens[1]);
        clean_buffer(); //funcao para limpar o Buffer
    }while(tokens[0] == tokens[1]);
    
}

//funcao para preencher a matriz
void preencherMatriz(char matriz[MATRIZTAM][MATRIZTAM]){
    int i, j;
    int num;
    char letra;
    letra = 'A';

    matriz[0][0] = ' ';
    
    for (i = 1; i < MATRIZTAM; ++i){
        matriz[i][0] = letra;
        ++letra;
        printf("%c", letra);
    }

    for (i = 1; i < MATRIZTAM; ++i){
        matriz[0][j] = num;
        ++num;
        printf("%d", num);
    }

    puts("");

    for (i = 0; i < MATRIZTAM; ++i) {
        for (j = 0; j < MATRIZTAM; ++j){ 
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

