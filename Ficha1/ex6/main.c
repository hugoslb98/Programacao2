#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n, ant, suc;
    puts("Introduza um numero: ");
    scanf("%d", &n);
    ant = n - 1;
    suc = n + 1;
    printf("O antecessor e: %d\n", ant);
    printf("O sucessor e: %d\n", suc);
    return 0;
}

