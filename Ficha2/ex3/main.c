#include <stdio.h>
#include <stdlib.h>

//constantes
#define POND1 0.25
#define POND2 0.35
#define POND3 0.40

int main(int argc, char** argv) {
    int nota1, nota2, nota3;
    float media;
    
    //Introducao das notas
    puts("Introduza a primeira nota: ");
    scanf("%d", &nota1);
    puts("Introduza a segunda nota: ");
    scanf("%d", &nota2);
    puts("Introduza a terceira nota: ");
    scanf("%d", &nota3);
    
    //Calculo da media
    media = (nota1 * POND1) + (nota2 * POND2) + (nota3 * POND3);
    
    //Estrutura condicional
    if (media >= 9.5) {
        printf("O aluno esta aprovado com %.2f valores!\n", media);
    } else {
        printf("O aluno esta reprovado com %.2f valores!\n", media);
    }
    return 0;
}

