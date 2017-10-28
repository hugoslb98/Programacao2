#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int limite, salto, i;
    
    puts("Introduza o limite: ");
    scanf("%d", &limite);
    
    puts("Introduza o salto: ");
    scanf("%d", &salto);
    
    for(i = 0; i <= limite; i+=salto){
        printf("%d\n", i);
    }
    return 0;
}

