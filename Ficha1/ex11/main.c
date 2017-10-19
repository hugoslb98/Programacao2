#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float nota1, nota2, nota3, mediap;
    puts("Introduza a primeira nota: ");
    scanf("%f", &nota1);
    puts("Introduza a segunda nota: ");
    scanf("%f", &nota2);
    puts("Introduza a terceira nota: ");
    scanf("%f", &nota3);
    mediap = (nota1 * 0.25) + (nota2 * 0.35) + (nota3 * 0.40);
    printf("A media ponderada e: %.2f\n", mediap);
    return 0;
}

