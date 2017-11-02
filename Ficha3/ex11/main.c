#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num, i, div;
    
    do{
        puts("Introduza um numero: ");
        scanf("%d", &num);
    }
    while(num <= 0);
    
    for(i = 1; i <= num; ++i){
        if(num % i == 0){
        div++;  
        }
    }
    
    if(div == 2){
        printf("O numero e primo !!\n");
    }else{
        printf("O numero nao e primo !!\n");
    }
    return 0;
}

