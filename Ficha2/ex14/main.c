#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double saldo, saldoFinal, mont, valorDeb, valorCre;
    char op;
    
    puts("Introduza o saldo: ");
    scanf("%lf", &saldo);
    
    puts("Introduza o valor a debitar/creditar: ");
    scanf("%lf", &mont);
    
    puts("Introduza a opcao debitar(-)/creditar(+): ");
    scanf("%c", &op);
    op = getchar();
    
    switch (op){
        case '-':
            printf("O saldo final e: %.2lf\n", saldoFinal = saldo - mont);
            break;
        case '+':
            printf("O saldo final e: %.2lf\n", saldoFinal = saldo + mont);
            break;
    }
    
    if (saldoFinal > 0) {
        printf("Debito realizado com sucesso\n");
    }
    if (saldoFinal < 0) {
        printf("Operacao impossivel por saldo insuficiente\n");
    }
    return 0;
}

