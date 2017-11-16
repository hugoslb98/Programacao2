#include <stdio.h>
#include <stdlib.h>
#define ARRAY_TAM 10

int main(int argc, char** argv) {
    int i, j, vetorA[ARRAY_TAM], vetorB[ARRAY_TAM], vetorC[ARRAY_TAM], vetorD[ARRAY_TAM], cont, arrayD;
   
    cont = 0;
    arrayD = 0;
    
    for(i = 0; i < ARRAY_TAM; ++i){
        puts("Introduza um numero para o Vetor A: ");
        scanf("%d", &vetorA[i]);
    }
    
    for(i = 0; i < ARRAY_TAM; ++i){
        puts("Introduza um numero para o Vetor B: ");
        scanf("%d", &vetorB[i]);
    }
    
    for(i = 0; i < (ARRAY_TAM * 2); ++i){
          
        vetorC[i] = vetorA[i];  
 
            for(j = 9; j < (ARRAY_TAM * 2); ++j){
                vetorC[i] = vetorB[j];
            }
        } 
   
    puts("Vetor C");
    for(i = 0; i < (ARRAY_TAM * 2); ++i){
        printf("%d\n", vetorC[i]);
    }
    
    for(i = 0; i < ARRAY_TAM; ++i){
        for(j = 0; j < ARRAY_TAM; ++j){
            if(vetorA[i] == vetorB[j]){
                break;
            }else{
            
                cont = cont + 1;
           }
        }
        
        if(cont == 10){
            vetorD[arrayD] = vetorA[i];
            arrayD = arrayD + 1;
            
            
            puts("Vetor D");
            printf("%d\n", vetorD[i]);
        }
    }
    
    return 0;
}

