#include <stdio.h>
#include "escreverMatriz.h"
#define LINHAS 3
#define COLUNAS 3


void escreverMatriz(int matriz [LINHAS][COLUNAS]){ 
    int i, j, transposta[LINHAS][COLUNAS]; 
    for (i = 0; i < LINHAS; ++i) {
        puts("");
        for (j = 0; j < COLUNAS; ++j){ 
            transposta[j][i] = matriz[i][j];
        }
    }
    for (i = 0; i < LINHAS; ++i) {
        puts("");
        for (j = 0; j < COLUNAS; ++j){ 
            printf("%d ", transposta[i][j]);
        }
    }
    puts("");
}