#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int horas24, min, horas12;
    
    //Inserir dados
    puts("Introduza as horas e os minutos: ");
    scanf("%d%d", &horas24, &min);
    
    if (horas24 >= 00 && horas24 <= 12) {
        printf("Sao %d horas e %d minutos AM\n", horas24, min);
    } else {
        horas12 = horas24 - 12;
        printf("Sao %d horas e %d minutos PM\n", horas12, min);
    }
    return 0;
}

