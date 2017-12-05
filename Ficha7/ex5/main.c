#include <stdio.h>
#include <stdlib.h>
#include "escreverMatriz.h"
#define LINHAS 3
#define COLUNAS 3

int main(int argc, char** argv) {
    int i, j, matriz [LINHAS][COLUNAS];
    
    for(i = 0; i < LINHAS; ++i){
        for(j = 0; j < COLUNAS; ++j){
            printf("Introduza um numero: [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    escreverMatriz(matriz);
    return 0;
}

