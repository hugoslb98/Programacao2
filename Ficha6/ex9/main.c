#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define TAM 20

int main(int argc, char** argv) {
    char palavra1[TAM], palavra2[TAM], palavra3[1] = ",";
    
    puts("Insira uma palavra 1: ");
    lerString(palavra1, TAM);
    
    puts("Insira uma palavra 2: ");
    lerString(palavra2, TAM);
    
    strcat(palavra1,palavra3);
    
    printf("A palavra e: %s\n", palavra1);
   
    
    return 0;
}

