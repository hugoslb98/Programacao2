#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int base, alt, area, per;
    puts("Introduza a base: ");
    scanf("%d", &base);
    puts("Introduza a altura: ");
    scanf("%d", &alt);
    area = base * alt;
    per = 2*(base + alt);
    printf("A area e: %d\n", area);
    printf("O perimetro e: %d\n", per);
    return 0;
}

