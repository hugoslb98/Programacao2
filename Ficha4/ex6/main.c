#include <stdio.h>
#include <stdlib.h>

void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}

void fazerRetangulo(int linhas, int colunas, char caracter){
    int i, j;
    for(i = 1; i <= colunas; ++i){
        for(j = 1; j <= linhas; ++j){
            if(i > 1 & i < colunas & j > 1 & j < linhas){
              printf(" "); 
            }else{
               printf("%c", caracter);
            }
        }
        puts("");
        }
}


int main(int argc, char** argv) {
    int linhas, colunas;
    char caracter;
    
    puts("Introduza as linhas: ");
    scanf("%d", &linhas);
    
    puts("Introduza as colunas: ");
    scanf("%d", &colunas);
    
    limparBufferEntrada();
    puts("Introduza o caracter: ");
    scanf("%c", &caracter);
    limparBufferEntrada();
    
    fazerRetangulo(linhas, colunas, caracter);
    
    return 0;
}

