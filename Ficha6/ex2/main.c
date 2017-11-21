#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAM 20

int main(int argc, char** argv) {
    char palavra[TAM];
    
    puts("Introduza uma palavra: ");
    lerString(palavra, TAM);
    
    printf("A palavra e: %s\n", palavra);
    return 0;
}

