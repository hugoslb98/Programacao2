#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num;
    
    puts("Introduza um numero: ");
    scanf("%d", &num);
    
    if (num%2==0) {
        printf("O numero e par!!\n");
    } else {
        printf("O numero e impar!!\n");
    }
    return 0;
}

