#include <stdio.h>
#include "utils.h"
#define MATRIZTAM 9

void clean_buffer(){ 
    char ch; 
    while ((ch = getchar()) != '\n' && ch != EOF); 
}

void escreverMatriz(char matriz [][MATRIZTAM]){ 
    int i, j; 
    printf(" |A|B|C|D|E|F|G|H|I|\n");
    for (i = 1; i < MATRIZTAM; ++i) {
        for (j = 1; j < MATRIZTAM; ++j){ 
            printf("%c", matriz[i][j]);
        }
        puts("");
    }
}