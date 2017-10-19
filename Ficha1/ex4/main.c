#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(int argc, char** argv) {
    float r, per, area;
    puts("Introduza o raio da circunferencia: ");
    scanf("%f", &r);
    per = 2 * PI * r;
    area = PI * (r * r);
    printf("O perimetro e: %f\n", per);
    printf("A area e: %f\n", area);
    return 0;
}

