#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num1, num2, num3;
    
    //inserir numeros
    puts("Introduza o primeiro numero: ");
    scanf("%d", &num1);
    puts("Introduza o segundo numero: ");
    scanf("%d", &num2);
    puts("Introduza o terceiro numero: ");
    scanf("%d", &num3);
    
    if (num1 > num2 && num2 > num3) {
        printf("Ordem crescente: %d %d %d\n", num1, num2, num3);
    } else if (num1 > num3) {
        printf("Ordem crescente: %d %d %d\n", num1, num3, num2);
    } else {
        printf("Ordem crescente: %d %d %d\n", num3, num1, num2);
    } else if (num2 > num3 && num1 > num3) {
        printf("Ordem crescente: %d %d %d\n", num2, num1, num3);
    }
    
    return 0;
}

