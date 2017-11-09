#include <stdio.h>
#include <stdlib.h>

void fat(int num){
    int i, fatorial = 1;
    for(i = 1; i <= num; ++i){
        fatorial = fatorial * i;
    }
    printf("O fatorial e: %d\n", fatorial);
}

int main(int argc, char** argv) {
    int num;
    printf("Introduza um numero: ");
    scanf("%d", &num);
    
    fat(num);
    
    return 0;
}

