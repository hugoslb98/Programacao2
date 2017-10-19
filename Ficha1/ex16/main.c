#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double depos1, valjuros1, depostotal1, depos2, valjuros2, depostotal2, depos3, valjuros3, depostotal3, depos4, valjuros4, depostotal4, totaldepos;
    float taxjuros1, taxjuros2, taxjuros3, taxjuros4;
    puts("Introduza o deposito do primeiro trimestre: ");
    scanf("%lf", &depos1);
    puts("Introduza a taxa de juros: ");
    scanf("%f", &taxjuros1);
    valjuros1 = (depos1 * taxjuros1);
    depostotal1 = (depos1 + valjuros1);
    printf("No primeiro trimestre o valor dos juros e: %.2f euros e o deposito final e: %.2lf euros\n", valjuros1, depostotal1);
    puts("Introduza o deposito do segundo trimestre: ");
    scanf("%lf", &depos2);
    puts("Introduza a taxa de juros: ");
    scanf("%f", &taxjuros2);
    valjuros2 = (depos2 * taxjuros2);
    depostotal2 = (depos2 + valjuros2);
    printf("No segundo trimestre o valor dos juros e: %.2f euros e o deposito final e: %.2lf euros\n", valjuros2, depostotal2);
    puts("Introduza o deposito do terceiro trimestre: ");
    scanf("%lf", &depos3);
    puts("Introduza a taxa de juros: ");
    scanf("%f", &taxjuros3);
    valjuros3 = (depos3 * taxjuros3);
    depostotal3 = (depos3 + valjuros3);
    printf("No terceiro trimestre o valor dos juros e: %.2f euros e o deposito final e: %.2lf euros\n", valjuros3, depostotal3);
    puts("Introduza o deposito do quarto trimestre: ");
    scanf("%lf", &depos4);
    puts("Introduza a taxa de juros: ");
    scanf("%f", &taxjuros4);
    valjuros4 = (depos4 * taxjuros4);
    depostotal4 = (depos4 + valjuros4);
    printf("No quarto trimestre o valor dos juros e: %.2f euros e o deposito final e: %.2lf euros\n", valjuros4, depostotal4);
    totaldepos = (depostotal1 + depostotal2 + depostotal3 + depostotal4); 
    printf("A soma dos depositos todos e: %.2lf euros\n", totaldepos);
    return 0;
}