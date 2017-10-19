#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float b, a, area;
    puts("Introduza a base: ");
    scanf("%f", &b);
    puts("Introduza a altura: ");
    scanf("%f", &a);
    area = (b * a) / 2;
    printf("A area e: %.2f\n", area);
    return 0;
}

