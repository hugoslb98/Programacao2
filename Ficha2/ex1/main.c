#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a, b;
    puts("Introduza um numero: ");
    scanf("%d", &a);
    puts("Introduza outro numero: ");
    scanf("%d", &b);
    if (a > b) {
        printf("O numero maior e: %d\n", a);
    } else {
        printf("O numero maior e: %d\n", b);
    }
    return 0;
}

