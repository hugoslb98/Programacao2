#include <stdio.h>
#include "utils.h"
#define MATRIZTAM 10

void clean_buffer(){ 
    char ch; 
    while ((ch = getchar()) != '\n' && ch != EOF); 
}

void escreverMatriz(char matriz [MATRIZTAM][MATRIZTAM]){ 
    int i, j; 

    for (i = 1; i < MATRIZTAM; ++i) {
        for (j = 1; j < MATRIZTAM; ++j){ 
            printf("%c", matriz[i][j]);
            printf("|");
        }
        puts("");
    }
}