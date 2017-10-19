#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int min1, seg1, min2, seg2, min3, seg3, min4, seg4, min5, seg5, hortotal, mintotal, segtotal, total;
    puts("Introduza os minutos e segundos da cancao 1: ");
    scanf("%d%d", &min1, &seg1);
    printf("Cancao 1 : %d minutos %d segundos\n", min1, seg1);
    puts("Introduza as minutos e segundos da cancao 2: ");
    scanf("%d%d", &min2, &seg2);
    printf("Cancao 2 : %d minutos %d segundos\n", min2, seg2);
    puts("Introduza as minutos e segundos da cancao 3: ");
    scanf("%d%d", &min3, &seg3);
    printf("Cancao 3 : %d minutos %d segundos\n", min3, seg3);
    puts("Introduza os minutos e segundos da cancao 4: ");
    scanf("%d%d", &min4, &seg4);
    printf("Cancao 4 : %d minutos %d segundos\n", min4, seg4);
    puts("Introduza as minutos e segundos da cancao 5: ");
    scanf("%d%d", &min5, &seg5);
    printf("Cancao 5 : %d minutos %d segundos\n", min5, seg5);
    mintotal = (min1 + min2 + min3 + min4 + min5) * 60;
    segtotal = (seg1 + seg2 + seg3 + seg4 + seg5);
    total = (mintotal + segtotal);
    printf("O total e: %d horas %d minutos %d segundos\n", total / 3600, mintotal % 3600 / 60, segtotal % 60);
    return 0;
}