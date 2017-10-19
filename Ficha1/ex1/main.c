#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    int a, b, soma;
    printf("Introduza um numero: ");
    scanf("%d", &a);
    printf ("Introduza outro numero: ");
    scanf("%d", &b);
    soma = a + b;
    printf("A soma e: %d\n", soma);
    return 0;
}