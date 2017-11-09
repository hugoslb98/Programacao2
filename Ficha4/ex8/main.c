#include <stdio.h>
#include <stdlib.h>
#define MIN 0
#define MAX 20

int lerInteiro(int min, int max){
    int num;
   
    while(1){
    
        printf("Introduza as notas entre %d e %d: ", MIN, MAX);
        scanf("%d", &num);
        if(num >= min & num <= max){
        break;
        }
    }
    return num;
}

int main(int argc, char** argv) {

    return 0;
}

