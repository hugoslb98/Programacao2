#include <stdio.h>
#include <stdlib.h>
#define ARRAY_TAM 10

void limparBufferEntrada(){
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF); 
}

void posicoes(char letra[]){
    char caract;
    int i, contador = 0;
    
    printf("Introduza a letra: ");
    caract = getchar();
    limparBufferEntrada();
    
    printf("Encontra se nas posições: ");
   
    for(i = 0; i < ARRAY_TAM; ++i){
        if(caract == letra[i]){
            contador += 1;
            printf("%d ", i);
       }
   }
    printf("\nHá %d letras %c\n", contador, caract);
}

int main(int argc, char** argv) {
    int i;
    char caracter[ARRAY_TAM];
    
    for(i = 0; i < ARRAY_TAM; ++i){
        printf("Introduza um caracter: ");
        caracter[i]=getchar();
        limparBufferEntrada();
    }
    
    posicoes(caracter);
    
    return 0;
}

