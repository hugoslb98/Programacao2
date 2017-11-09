#include <stdio.h>
#include <stdlib.h>
#include"lerinteiro.h"

#define MIN 1
#define MAX 20

void escrever(int num){
    int i;
    for(i = 0; i < num; ++i){
        printf("*");
    }
    printf("\n");
}

int main(int argc, char** argv) {
    int num;
    
    num = lerInteiro(MIN, MAX);
    escrever(num);
    
    return 0;
}

