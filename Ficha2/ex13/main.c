#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float tempAtual, difTemp;
    int tempPreten, seg;
    
    puts("Introduza a temperatura atual: ");
    scanf("%f", &tempAtual);
    puts("Introduza a temperatura pretendida: ");
    scanf("%d", &tempPreten);
    
    if (tempAtual < tempPreten) {
        difTemp = tempPreten - tempAtual;
        seg = 180 * difTemp;
        printf("Sao necessarios %d segundos para atingir a temperatura pretendida!!\n", seg);
    }
    if (tempAtual > tempPreten) {
        difTemp = tempAtual - tempPreten;
        seg = 120 * difTemp;
        printf("Sao necessarios %d segundos para atingir a temperatura pretendida!!\n", seg);
    }
    return 0;
}

