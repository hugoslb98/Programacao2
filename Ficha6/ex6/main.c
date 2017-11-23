#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define TAM 20

int main(int argc, char** argv) {
    char palavra[TAM];
    char caracter;
    
    puts("Insira uma palavra: ");
    lerString(palavra, TAM);
    
    puts("Insira um caracter dessa palavra: ");
    scanf("%c", &caracter);
    clean_buffer();
    
    countChar(palavra, caracter);
    
    return 0;
    
}

