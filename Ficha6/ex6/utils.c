#include <stdio.h>
#include <string.h>
#include "utils.h"
#define TAM 20

void clean_buffer(){ 
    char ch; 
    while ((ch = getchar()) != '\n' && ch != EOF); 
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1; 
        if (string[tamanho] == '\n') { string[tamanho] = '\0'; }
        else{ clean_buffer(); }
        return 1;     
    }   
}
    
void countChar(char vetor[], char caracter){
int i, cont;
    cont = 0;
    for(i = 0; i < TAM; ++i)
    {
        if(vetor[i] == caracter)
        {
            cont = cont + 1;
        }
    }
    printf("Ha %d caracteres %c na palavra %s !!\n", cont, caracter, vetor);
}