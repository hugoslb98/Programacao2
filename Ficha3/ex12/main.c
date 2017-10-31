#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num, soma, i;
    float media;
    soma = 0;
    media = 0;
    
    do{
        puts("Introduza numeros: ");
        scanf("%d", &num);
        
        if(num != -1){
            soma = soma + num;
            i++;
            media = ((float)soma / i);
        } else {
            printf("A media e: %.2f\n", media);
        }
    } while (num != -1);
    
    return 0;
}

