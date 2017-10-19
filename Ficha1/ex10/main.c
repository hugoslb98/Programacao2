#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float a, b, c, d, e, media;
    puts("Introduza o primeiro numero: ");
    scanf("%f", &a);
    puts("Introduza o segundo numero: ");
    scanf("%f", &b);
    puts("Introduza o terceiro numero: ");
    scanf("%f", &c);
    puts("Introduza o quarto numero: ");
    scanf("%f", &d);
    puts("Introduza o quinto numero");
    scanf("%f", &e);
    media = (a + b + c + d + e) / 5;
    printf("A media e: %.2f\n", media);
    return 0;
}

