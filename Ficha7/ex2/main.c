#include <stdio.h>
#include <stdlib.h>
#define LINHAS 4
#define COLUNAS 5


void numeroVezes(int matriz [LINHAS][COLUNAS]){
    int i, j, num, cont = 0;
    
    puts("Introduza o numero que deseja saber quantas vezes existe na matriz: ");
    scanf("%d", &num);
    
    for(i = 0; i < LINHAS; ++i){
        for(j = 0; j < COLUNAS; ++j){
            if(matriz[i][j] == num){
            ++cont;
            }
        }
    }
    printf("O numero %d existe %d vezes na matriz !!\n", num, cont);
}

int main(int argc, char** argv) {
    int i, j, matriz [LINHAS][COLUNAS];
    
    for(i = 0; i < LINHAS; ++i){
        for(j = 0; j < COLUNAS; ++j){
            printf("Introduza um numero: [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    numeroVezes(matriz);
    
    return 0;
}

