#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int seg, hor, min;
    puts("Introduza o numero de segundos: ");
    scanf("%d", &seg);
    min = seg / 60;
    hor = seg / 3600;
    printf("sao: %d horas %d minutos %d segundos\n", hor, min % 60, seg % 60);
    return 0;
}

