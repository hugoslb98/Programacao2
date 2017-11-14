#include <stdio.h>
#include <stdlib.h>
#define ARRAY_TAM 10

int main(int argc, char** argv) {
    int i;
    double vetor[ARRAY_TAM], num, soma;
    
    for(i = 0; i < ARRAY_TAM; ++i){
        printf("Introduza um numero: ");
        scanf("%lf", &num);
        if(num == -1){
            break;
        }else{
            vetor[i] = num;
            ++num;
        }
    }
    printf("Ja foram introduzidos todos os numeros !!\n");
    
    for(i = 0; i < ARRAY_TAM; ++i){
        soma = soma +  vetor[i];
    }
    printf("A media dos numeros do vetor e: %lf\n", soma/num);
    return 0;
}

