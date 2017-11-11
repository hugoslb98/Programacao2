#include <stdio.h>
#include <stdlib.h>
#define ARRAY_TAM  21

int main(int argc, char** argv) {
    int i, vetor[ARRAY_TAM];
    
    for(i = 0; i < ARRAY_TAM; ++i){
        vetor[i] = i + 5;
        printf("%d ",vetor[i]);
    }
    return 0;
}

