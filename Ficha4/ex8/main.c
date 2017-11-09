#include <stdio.h>
#include <stdlib.h>
#include"lerinteiro.h"

#define MIN 0
#define MAX 20
#define ALUNOS 10

int lerNota(int nota){
    int i;
    for(i = 1; i <= ALUNOS; ++i){
        nota = lerInteiro(MIN, MAX);
    }
return nota;
}

int main(int argc, char** argv) {
    int nota, i;
    nota = lerNota(nota); 
    return 0;
}

