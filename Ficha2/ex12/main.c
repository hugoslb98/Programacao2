#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x, y;
    
    puts("Introduza x: ");
    scanf("%d", &x);
    puts("Introduza y: ");
    scanf("%d", &y);
    
    if (x > 0 && y > 0) {
        printf("O ponto esta no 1º quadrante!!\n");
    }
    if (x < 0 && y > 0) {
        printf("O ponto esta no 2º quadrante!!\n");
    }
    if (x < 0 && y < 0) {
        printf("O ponto esta no 3º quadrante!!\n");
    }
    if (x > 0 && y < 0) {
        printf("O ponto esta no 4º quadrante!!\n");
    }
    return 0;
}

