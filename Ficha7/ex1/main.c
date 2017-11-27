#include <stdio.h>
#include <stdlib.h>

#include "escreverMatriz.h"
#define LINHAS 3
#define COLUNAS 3


void maiorNum(int matriz[LINHAS][COLUNAS]){
    int i, j, maior;
    
    for (i = 0; i < LINHAS; ++i){
        for(j = 0; j < COLUNAS; ++j){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    printf("O numero maior e: %d\n", maior);
}

void menorNum(int matriz[LINHAS][COLUNAS]){
    int i, j, menor;
    
    for (i = 0; i < LINHAS; ++i){
        for(j = 0; j < COLUNAS; ++j){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }
    printf("O numero menor e: %d\n", menor);
}

int main(int argc, char** argv) {
    int i, j, matriz [LINHAS][COLUNAS];
    
    for(i = 0; i < LINHAS; ++i){
        for(j = 0; j < COLUNAS; ++j){
            printf("Introduza um numero: [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    escreverMatriz(matriz);
    
    puts("\n");
    
    maiorNum(matriz);
    menorNum(matriz);
    
    return 0;
}

