#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, num;
    
    puts("Introduza um numero: ");
    scanf("%d", &num);
    
    printf("Os 5 numeros anteriores sao:\n");
    for (i = num - 1; i >= num - 5; --i){
        printf("%d\n", i);
    }
    printf("Os 5 numeros seguintes sao:\n");
    for (i = num + 1; i <= num + 5; ++i){
        printf("%d\n", i);
    }
    return 0;
}

