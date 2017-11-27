#include <stdio.h>
#include "escreverMatriz.h"
#define LINHAS 3
#define COLUNAS 3


void escreverMatriz(int matriz [LINHAS][COLUNAS]){ 
    int i, j; 
    for (i = 0; i < LINHAS; ++i) {
        puts("");
        for (j = 0; j < COLUNAS; ++j){ 
            
            printf("%d", matriz[i][j]);
        }
    }
}