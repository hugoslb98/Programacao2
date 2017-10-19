#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char** argv) {
    float i, m, a;
    puts("Introduza a massa (em km): ");
    scanf("%f", &m);
    puts("Introduza a altura (em metros): ");
    scanf("%f", &a);
    i = m / (a * a);
    printf("O indice de massa muscular e: %f\n", i);
    return 0;
}
