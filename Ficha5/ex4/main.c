#include <stdio.h>
#include <stdlib.h>
#define ARRAY_TAM 10

int main(int argc, char** argv) {
    int i, total = 0;
    double vetor[ARRAY_TAM], num, soma, media;
    
    for(i = 0; i < ARRAY_TAM; ++i){
        printf("Introduza um numero: ");
        scanf("%lf", &num);
        if(num == -1){
            break;
        }else{
            vetor[i] = num;
            soma = soma +  vetor[i];
            ++total;
        }
    }
    printf("Ja foram introduzidos todos os numeros !!\n");

        media = soma / total;
  
    printf("A media dos numeros do vetor e: %lf\n", media);
    
    return 0;
}

