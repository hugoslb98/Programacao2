#include <stdio.h>
#include <stdlib.h>
#define ARRAY_TAM 1000

int main(int argc, char** argv) {
    int i, num, vetor[ARRAY_TAM];
    
    puts("Introduza um numero ate 1000");
    scanf("%d", &num);
    
    while(num > ARRAY_TAM){
        puts("Numero maximo ultrapassado !!");
        printf("Introduza outro numero: ");
        scanf("%d", &num);
    }
    
    for(i = 0; i < ARRAY_TAM; ++i){
        vetor[i] = i;
    }
    
    for(i = 4; i < ARRAY_TAM; i = i + 2){
        vetor[i] = 0;
    }
    
    for(i = 6; i < ARRAY_TAM; i = i + 3){
        vetor[i] = 0;
    }
    
    for(i = 8; i < ARRAY_TAM; i = i + 4){
        vetor[i] = 0;
    }
    
    for(i = 10; i < ARRAY_TAM; i = i + 5){
        vetor[i] = 0;
    }
    
    for(i = 14; i < ARRAY_TAM; i = i + 7){
        vetor[i] = 0;
    }
    
    puts("Numeros primos:");
    
    for(i = 2; i < num; ++i){
        if(vetor[i] != 0){
            printf("%d\n", vetor[i]);
        }
    }
    
    return 0;
}

