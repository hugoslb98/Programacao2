#include <stdio.h>
#include "escreverMatriz.h"
#define LINHAS 3
#define COLUNAS 3


void escreverMatriz(int matriz [LINHAS][COLUNAS]){ 
    int i, j; 
    for (i = 0; i < LINHAS; ++i) {
        puts("");
        for (j = (COLUNAS - 1); j >= 0; --j){ 
            
            printf("%d", matriz[j][i]);
        }
    }
    puts("\n");
}