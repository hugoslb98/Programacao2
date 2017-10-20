#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float n1, n2, res;
    char op;
    
    //Introducao dos numeros
    puts("Introduza um numero: ");
    scanf("%f", &n1);
    puts("Introduza outro numero: ");
    scanf("%f", &n2);
    puts("Introduza a operacao: ");
    scanf("%c", &op);
    op = getchar();
    
    //Estrutura de selecao1
    switch (op){
        case '+':
            printf("%.2f\n", res = n1 + n2);
            break;
        case '-':
            printf("%.2f\n", res = n1 - n2);
            break;
        case '*':
            printf("%.2f\n", res = n1 * n2);
            break;
        case '/':
            printf("%.2f\n", res = n1 / n2);
            break;
        default:
            printf("Introduziu operador invalido!\n");
    }
    return 0;
}

