#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MATRIZTAM 9
#define NUMTOKEN 1

//funcao para os jogadores escolherem os tokens

void escolherTokens(char tokens[]) {

    do {
        puts("Jogador 1 introduza o seu token: ");
        scanf("%c", &tokens[0]);
        clean_buffer(); //funcao para limpar o Buffer

        puts("Jogador 2 introduza o seu token: ");
        scanf("%c", &tokens[1]);
        clean_buffer(); //funcao para limpar o Buffer
    } while (tokens[0] == tokens[1]);
}

//criar matriz

void criarMatriz(char matriz[MATRIZTAM][MATRIZTAM]) {
    int i, j;
    int num;
    char letra = 'A';

    //prencher a matriz com -
    for (j = 0; j < MATRIZTAM; ++j) {
        for (i = 0; i < MATRIZTAM; ++i) {
            matriz[j][i] = '-';
        }
    }
}

//funcao para preencher a matriz

void printMatriz(char matriz[MATRIZTAM][MATRIZTAM]) {
    int i, j;
    int num;

    //abecedario na 1ª linha
    printf("| |A|B|C|D|E|F|G|H|I|");

    puts("");

    //numeros na 1ª coluna
    for (i = 0; i < MATRIZTAM; ++i) {
        printf("|%d|", i + 1);
        for (j = 0; j < MATRIZTAM; ++j) {
            printf("%c|", matriz[i][j]);
        }
        puts("");
    }
}

void jogada(char matriz[MATRIZTAM][MATRIZTAM], char tokens[]) {
    int linha, jog, i;
    char coluna;

    for (i = 0; i < MATRIZTAM; ++i) {
        do {
            puts("Jogador 1 introduza a linha: (de 1 a 9)");
            scanf("%d", &linha);
            linha = linha - 1;
            puts("Jogador 1 introduza a coluna: (de A a I)");
            clean_buffer();
            scanf("%c", &coluna);
            clean_buffer();
            coluna = coluna - 'A';

            if (matriz[linha][coluna] == '-') {
                matriz[linha][coluna] = tokens[0];
            }
            printMatriz(matriz);
        } while (jog == 1);

        do {
            puts("Jogador 2 introduza a linha: (de 1 a 9)");
            scanf("%d", &linha);
            linha = linha - 1;
            puts("Jogador 2 introduza a coluna: (de A a I)");
            clean_buffer();
            scanf("%c", &coluna);
            clean_buffer();
            coluna = coluna - 'A';

            if (matriz[linha][coluna] == '-') {
                matriz[linha][coluna] = tokens[1];
            }
            printMatriz(matriz);
        } while (jog == 2);
    }
}

int main(int argc, char** argv) {
    char matriz[MATRIZTAM][MATRIZTAM];
    char tokens[2];

    escolherTokens(tokens);
    criarMatriz(matriz);
    printMatriz(matriz);
    jogada(matriz, tokens);

    return 0;
}

