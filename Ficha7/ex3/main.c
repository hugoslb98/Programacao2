#include <stdio.h>
#include <stdlib.h>
#include "escreverMatriz.h"
#define LINHAS 4
#define COLUNAS 3

int main(int argc, char** argv) {
    int i, j, matriz [LINHAS][COLUNAS];
    
    for(i = 0; i < LINHAS; ++i){
        for(j = 0; j < COLUNAS; ++j){
            printf("Introduza o codigo e as notas do aluno %d respetivamente: ", i + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    escreverMatriz(matriz);
    
    return 0;
}

