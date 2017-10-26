#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num1, num2, i;
    
    //Introduzir os numeros
    puts("Introduza um numero: ");
    scanf("%d", &num1);
    puts("Introduza outro numero: ");
    scanf("%d\n", &num2);
    
    for (i = num1; i <= num2; ++i) {
        printf("%d\n", i);
    }
    return 0;
}

