#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define TAM 20

int main(int argc, char** argv) {
    char palavra[TAM];
    int num;
    
    puts("Insira uma palavra: ");
    lerString(palavra, TAM);
    
    num = strlen(palavra);
    
    printf("A palavra tem %d caracteres\n", num);
    return 0;
}

