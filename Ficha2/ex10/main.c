#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num;
    
    puts("Introduza um numero: ");
    scanf("%d", &num);
    
    if ((num%3==0) && (num%5==0)) {
        printf("O numero e divisivel por 3 e por 5\n");
    } else {
        printf("O numero nao e divisivel por 3 e por 5\n");
    }
    return 0;
}

