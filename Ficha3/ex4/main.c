#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, soma;
    
    for (i = 1; i <= 100; ++i){
        printf("%d\n", i);
        soma = (soma + i);
    }
    printf("A soma e: %d\n", soma);
    
    return 0;
}

