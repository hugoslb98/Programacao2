#include <stdio.h>
#include <stdlib.h>

void escrever(int num){
    int i;
    for(i = 0; i < num; ++i){
        printf("*");
    }
    printf("\n");
}
int lerInteiro(){
    int num;
    printf("Introduza o numero de asteriscos: ");
    scanf("%d", &num);
    return num;
}
int main(int argc, char** argv) {
    int num;
    
    num = lerInteiro();
    escrever(num);
    
    return 0;
}

