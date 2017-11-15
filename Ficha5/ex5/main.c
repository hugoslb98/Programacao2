#include <stdio.h>
#include <stdlib.h>
#define ARRAY_TAM 10

void mostrarVetor(double vetor[]){
    int i;
    printf("Vetor Normal:\n");
    for(i = 0; i < ARRAY_TAM; ++i){
        printf("%.2lf\n", vetor[i]);
    }
}

void dobroVetor(double vetor[]){
    int i;
    printf("Dobro do Vetor:\n");
    for(i = 0; i < ARRAY_TAM; ++i){
        printf("%.2lf\n", 2 * vetor[i]);
    }
}

void somaVetor(double vetor[]){
    int i;
    double soma;
    for(i = 0; i < ARRAY_TAM; ++i){
        soma = soma + vetor[i];
    }
    printf("A soma dos elementos %.2lf\n", soma);
}

void mediaVetor(double vetor[]){
    int i;
    double media, soma;
    for(i = 0; i < ARRAY_TAM; ++i){
        soma = soma + vetor[i];
        media = soma / ARRAY_TAM;
    }
    printf("A media dos elementos %.2lf\n", media);
}

void maiorNum(double vetor[]){
    int i;
    double num;
    for(i = 0; i < ARRAY_TAM; ++i){
        if(vetor[i] > num){
            num = vetor[i];
        }
    }
    printf("O numero maior e: %.2lf\n", num);
} 

void menorNum(double vetor[]){
    int i;
    double num;
    for(i = 0; i < ARRAY_TAM; ++i){
        if(vetor[i] < num){
            num = vetor[i];
        }
    }
    printf("O numero menor e: %.2lf\n", num);
} 

int main(int argc, char** argv) {
    int i;
    double vetor[ARRAY_TAM];
    
    for(i = 0; i < ARRAY_TAM; ++i){
        printf("Introduza um numero: ");
        scanf("%lf", &vetor[i]);
    }
    
    mostrarVetor(vetor);
    dobroVetor(vetor);
    somaVetor(vetor);
    mediaVetor(vetor);
    maiorNum(vetor);
    menorNum(vetor);
    
    return 0;
}

