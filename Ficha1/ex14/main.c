#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a, b, c, d, e, total;
    float aper, bper, cper, dper, eper;
    puts("Introduza o numero de votos do candidato A: ");
    scanf("%d", &a);
    puts("Introduza o numero de votos do candidato B: ");
    scanf("%d", &b);
    puts("Introduza o numero de votos do candidato C: ");
    scanf("%d", &c);
    puts("Introduza o numero de votos do candidato D: ");
    scanf("%d", &d);
    puts("Introduza o numero de votos do candidato E: ");
    scanf("%d", &e);
    total = (a + b + c + d + e);
    aper = (a *100) / total;
    bper = (b *100) / total;
    cper = (c *100) / total;
    dper = (d *100) / total;
    eper = (e *100) / total;
    printf("Total: %d\n", total);
    printf("Candidato A: %.2f %%\n", aper);
    printf("Candidato B: %.2f %%\n", bper);
    printf("Candidato C: %.2f %%\n", cper);
    printf("Candidato D: %.2f %%\n", dper);
    printf("Candidato E: %.2f %%\n", eper);
    return 0;
}

