#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a, b, res, sub, mult;
    puts("Introduza um numero: ");
    scanf("%d", &a);
    puts("Introduza outro numero: ");
    scanf("%d", &b);
    sub = a - b;
    res = sub * a;
    printf("O resultado e: %d\n", res);
    return 0;
}

