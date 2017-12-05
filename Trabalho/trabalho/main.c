#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MATRIZTAM 9
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
    char letra = 'A';
    
    //prencher a matriz com -
    for (j = 0; j < MATRIZTAM; ++j){
        for (i = 0; i < MATRIZTAM; ++i){
            matriz[j][i]='-';
        }
    }
    
    //abecedario na 1ª linha
    printf("| |A|B|C|D|E|F|G|H|I|");
    
    puts("");
    
    //numeros na 1ª coluna
    for (i = 0; i < MATRIZTAM; ++i) {
        printf("|%d|", i + 1);
        for (j = 0; j < MATRIZTAM; ++j){
            printf("%c|", matriz[i][j]);
        }
        puts("");
    }
}

void jogada(char matriz[MATRIZTAM][MATRIZTAM], char tokens[]){
    int linha, coluna, jog, i;
    
    for(i = 0; i < MATRIZTAM; ++i){
    do{
    puts("Jogador 1 introduza a linha: (de 1 a 9)");
    scanf("%d", &linha);
    puts("Jogador 1 introduza a coluna: (de A a I)");
    scanf("%c", &coluna);
    clean_buffer();
    
    puts("Jogador 2 introduza a linha: (de 1 a 9)");
    scanf("%d", &linha);
    puts("Jogador 2 introduza a coluna: (de A a I)");
    scanf("%c", &coluna);
    clean_buffer();
    }while (matriz[MATRIZTAM][MATRIZTAM] != '-');
    }
}

int main(int argc, char** argv) {
    char matriz[MATRIZTAM][MATRIZTAM];
    char tokens[2];
    
    escolherTokens(tokens);
    preencherMatriz(matriz);
    escreverMatriz(matriz);
    jogada(matriz, tokens);
    
    return 0;
}

