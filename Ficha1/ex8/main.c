#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float c, f;
    puts("Introduza a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5/9;
    printf("A temperatura em graus Centigrados e: %f\n", c);
    return 0;
}

