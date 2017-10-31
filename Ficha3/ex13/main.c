#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int nota;
    
    do{
       puts("Introduza uma nota de 0 a 20: ");
       scanf("%d", &nota); 
    } while(nota < 0 || nota > 20);
    
    printf("A nota e: %d\n", nota);
    
    if(nota >= 9.5){
       printf("O aluno esta aprovado!!\n"); 
    }else{
        printf("O aluno nao esta aprovado!!\n");
    }
    return 0;
}

