#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define TAM 20

int main(int argc, char** argv) {
    char palavra1[TAM], palavra2[TAM];
    
    puts("Insira uma palavra 1: ");
    lerString(palavra1, TAM);
    
    strcpy(palavra2, palavra1);
    
    printf("A palavra 2 e: %s\n", palavra2);
    return 0;
}

