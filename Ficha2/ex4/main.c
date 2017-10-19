#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a, b, c;
    
    //Introducao de numeros
    puts("Introduza o primeiro numero: ");
    scanf("%d", &a);
    puts("Introduza o segundo numero: ");
    scanf("%d", &b);
    puts("Introduza o terceiro numero: ");
    scanf("%d", &c);
    
    //Estrutura condicional
    if (a < b && a < c) {
        printf("O menor numero: %d\n", a);
    } if (b < a && b < c) {
        printf("O menor numero: %d\n", b);
    } if (c < a && c < b) {
        printf("O menor numero: %d\n", c);
    }
    return 0;
}

