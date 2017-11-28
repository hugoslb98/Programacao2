#include <stdio.h>
#include "escreverMatriz.h"
#define LINHAS 4
#define COLUNAS 3


void escreverMatriz(int matriz [LINHAS][COLUNAS]){ 
    int i, j, soma[LINHAS]; 
    printf("Codigo | Nota 1 | Nota2 | Media\n");
    for (i = 0; i < LINHAS; ++i) {
        puts("");
        for (j = 0; j < COLUNAS; ++j){ 
            printf(" %4d    ", matriz[i][j]);
        }
            soma[i] = matriz[i][1] + matriz[i][2];
            printf("%.2f", (float)soma[i] / 2);
            puts(" ");
    }
}