#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a, b;
    puts("Introduza um numero: ");
    scanf("%d", &a);
    puts("Introduza outro numero: ");
    scanf("%d", &b);
    if (a > b) {
        printf("Maior para menor: %d %d\n", a, b);
    } else {
        printf("Maior para menor: %d %d\n", b, a);
    }
    return 0;
}
