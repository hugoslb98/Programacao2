#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x, y;
    
    puts("Introduza um numero (x): ");
    scanf("%d", &x);
    
    if (x < 1) {
        printf("O numero y e: %d\n", x);
    } 
    if (x == 1) {
        y = 0;
        printf("O numero y e: %d\n", y);
    }
    if (x > 1) {
        y = 2 * x;
        printf("O numero y e: %d\n", y);
    }
    return 0;
}

