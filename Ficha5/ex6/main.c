#include <stdio.h>
#include <stdlib.h>
#define ARRAY_TAM 10

void limparBufferEntrada(){
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF); 
}

int main(int argc, char** argv) {
    int i, vetor[ARRAY_TAM];
    char op;
    
    for(i = 0; i < ARRAY_TAM; ++i){
        printf("Introduza um numero: ");
        scanf("%d", &vetor[i]);
    }
    
    printf("Pares ou Impares (p/i) ");
    limparBufferEntrada();
    scanf("%c", &op);
    limparBufferEntrada();
    
    if(op == 'p'){
        for(i = 0; i < ARRAY_TAM; ++i){
            if(vetor[i] % 2 == 0){
                printf("%d\n", vetor[i]);
            }
        }
    }else if(op == 'i'){
        for(i = 0; i < ARRAY_TAM; ++i){
            if(vetor[i] % 2 == 1){
                printf("%d\n", vetor[i]);
            }
        }
    }
    
    return 0;
}

