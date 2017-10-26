#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int min;
    double horas, velMedia, posto;
    
    puts("Em quanto tempo pretende fazer a viagem ? ");
    scanf("%d", &min);
    
    horas = min / 60.0;
    
    velMedia = (130 / horas);
    
    if (velMedia <= 60) {
        posto = 400 / 5;
        if (posto < 60) {
            printf("Nao tem como fazer a viagem !!\n");
        }
        else if (posto >= 60 && 70) {
            printf(" !!\n");
    }
    return 0;
}

