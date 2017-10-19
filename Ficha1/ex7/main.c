#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float k, a;
    puts("Introduza uma distancia(em km): ");
    scanf("%f", &k);
    a = k / 300000;
    printf("Em anos luz e: %f\n", a);
    return 0;
}
