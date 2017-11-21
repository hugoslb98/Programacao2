#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAM 20

int main(int argc, char** argv) {
     char palavra1[TAM];
     char palavra2[TAM];
     int alfab;
     
     puts("Insira uma palavra: ");
     lerString(palavra1, TAM);
     
     puts("Insira outra palavra: ");
     lerString(palavra2, TAM);
     
     alfab = strcmp(palavra1, palavra2);
     
     if(alfab < 0){
         printf("A palavra e: %s\n", palavra1);
         printf("A palavra e: %s\n", palavra2);
     }else{
         printf("A palavra e: %s\n", palavra2);
         printf("A palavra e: %s\n", palavra1);
     }
     
    return 0;
}

