#include <stdio.h>
#include <stdlib.h>
#define ARRAY_TAM 10

int main(int argc, char** argv) {
    int i, vetorA[ARRAY_TAM], vetorB[ARRAY_TAM], vetorC[ARRAY_TAM], vetorD[ARRAY_TAM];
   
    for(i = 0; i < ARRAY_TAM; ++i){
        puts("Introduza um numero para o Vetor A: ");
        scanf("%d", &vetorA[i]);
    }
    
    for(i = 0; i < ARRAY_TAM; ++i){
        puts("Introduza um numero para o Vetor B: ");
        scanf("%d", &vetorB[i]);
    }
    
    for(i = 0; i < ARRAY_TAM; ++i){
        vetorC[i] = vetorA[i] + vetorB[i];
    } 
   
    puts("Vetor C");
    for(i = 0; i < ARRAY_TAM; ++i){
        printf("%d\n", vetorC[i]);
    }
    
    for(i = 0; i < ARRAY_TAM; ++i){
        
    }
    
    return 0;
}

