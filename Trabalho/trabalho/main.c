#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MATRIZTAM 9

int verificar(char matriz[][MATRIZTAM]) {
    int i, j;

    //verificar horizontalmente
    for (i = 0; i < MATRIZTAM; ++i) {
        for (j = 0; j < MATRIZTAM - 2; ++j) {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2]) {
                return 1;
            }
        }
    }

    //verificar verticalmente
    for (i = 0; i < MATRIZTAM - 2; ++i) {
        for (j = 0; j < MATRIZTAM; ++j) {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j]) {
                return 1;
            }

        }
    }

    //verificar diagonais
    for (i = 0; i < MATRIZTAM - 2; ++i) {
        for (j = 0; j < MATRIZTAM - 2; ++j) {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2]) {
                return 1;
            }
        }
    }

    //verificar diagonais
    for (i = 0; i < MATRIZTAM - 2; ++i) {
        for (j = 0; j < MATRIZTAM - 2; ++j) {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i + 1][j - 1] && matriz[i][j] == matriz[i + 2][j - 2]) {
                return 1;
            }
        }
    }

    return 0;
}

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

    //letras na 1ª linha
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
    int linha, jog, i, cont = 0;
    char coluna;
    int vencedor = 0;

    //ciclo para para pedir ao jogador 1 para introduzir a linha e coluna
    for (i = 0; i < MATRIZTAM; ++i) {
        ++cont; //contador para saber o nr de jogadas
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
                vencedor = verificar(matriz);
            }

            printMatriz(matriz);
            if (vencedor > 0) {
                printf("O jogador 1 ganhou com %d jogadas !!\n", cont);
                break;
            }
        } while (jog == 1);

        if (vencedor > 0) {
            break;
        }

        //ciclo para para pedir ao jogador 2 para introduzir a linha e coluna
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
                vencedor = verificar(matriz);
            }
            if (vencedor > 0) {
                printf("O jogador 2 ganhou com %d jogadas !!\n", cont);
                break;
            }
            printMatriz(matriz);

        } while (jog == 2);
        if (vencedor > 0) {
            break;
        }
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

