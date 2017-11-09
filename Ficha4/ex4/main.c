#include <stdio.h>
#include <stdlib.h>

float notas(int num){
    int i;
    float notas, soma = 0;
    
    for(i = 0; i < num; ++i){
        printf("Introduza as notas: ");
        scanf("%f", &notas);
        soma = soma + notas;
    }
    return soma;
}

int main(int argc, char** argv) {
    int num;
    double media;
    
    puts("Introduza um numero: ");
    scanf("%d", &num);
    
    media = notas(num);
    
    printf("A media e: %.2lf\n", (media / num));
    
    
    return 0;
}

