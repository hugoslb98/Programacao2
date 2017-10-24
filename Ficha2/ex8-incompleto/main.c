#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int horentr, minentr, horsai, minsai, difhor, difmin;
    
    puts("Introduza a hora e os minutos da entrada: ");
    scanf("%d%d", &horentr, &minentr);
    puts("Introduza a hora e os minutos da saida: ");
    scanf("%d%d", &horsai, &minsai);
    
    difhor = horsai - horentr;
    difmin = minsai - minentr;
    
    printf("O funcionario trabalhou %d horas e %d minutos\n", difhor, difmin);
    
    return 0;
}

