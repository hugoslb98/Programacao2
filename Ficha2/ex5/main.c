#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float n1, n2;
    char op;
    
    //Introducao dos numeros
    puts("Introduza um numero: ");
    scanf("%d", &n1);
    puts("Introduza outro numero: ");
    scanf("%d", &n2);
    puts("Introduza a operacao (+)(-)(*)(/)");
    scanf("%c", &op);
    
    //Estrutura de selecao1
    switch (op){
        case '+':
            printf("%.2f", n1 + n2);
            break;
        case '-':
            printf("%.2f", n1 - n2);
            break;
        case '*':
            printf("%.2f", n1 * n2);
            break;
        case '/':
            printf("%.2f", n1 / n2);
            break;
        default:
            printf("Introduziu operador invalido!");
    }
    return 0;
}

