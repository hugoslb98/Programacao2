#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, num;
    
    //Introduzir os numeros
    puts("Introduza um numero positivo: ");
    scanf("%d", &num);
    
    if(num > 0) {
    for(i = num - 1; i >= 0; --i){
        if(i % 2 != 0){
            printf("%d ", i);  
        }
    }    
    }else{
        printf("Introduziu um numero negativo!!\n");
    }
    
    return 0;
}

