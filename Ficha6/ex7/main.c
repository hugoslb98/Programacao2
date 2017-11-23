#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define TAM 50

int main(int argc, char** argv) {
    char nomeCompleto[TAM];
    int num = 0, i = 0;
    
    puts("Escreva o seu nome completo: ");
    lerString(nomeCompleto, TAM);
    
    num = strlen(nomeCompleto);
    
    for(i = 0; i < strlen(nomeCompleto); ++i){
        if(nomeCompleto[i] == ' '){
            --num;
        }
    }
    
    printf("A palavra tem %d caracteres\n", num);
    
    return 0;
}

