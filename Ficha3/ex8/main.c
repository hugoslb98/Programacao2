#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num, i, numpar;
    
    puts("Introduza um numero: ");
    scanf("%d", &num);
    
    while(numpar <= num){
        if(i % 2 == 0){
            printf("%d ", i);
            numpar += 1;
        }
        i++;
    }
    return 0;
}

