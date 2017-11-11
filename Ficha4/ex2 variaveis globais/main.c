#include <stdio.h>
#include <stdlib.h>

int num1, num2;
char op;
float res;

long soma(){
    return num1 + num2;
}
long subtracao(){
    return num1 - num2;
}
float multiplicacao(){
    return num1 * num2;
}
long divisao(){
    return num1 / num2;
}
int main(int argc, char** argv) {
    
    puts("Introduza um numero: ");
    scanf("%d", &num1);
    
    puts("Introduza outro numero: ");
    scanf("%d", &num2);
    
    puts("Introduza a operacao: ");
    scanf("%c", &op);
    
    op = getchar();
    
    switch (op){
        case '+':
            printf("%.2f\n", res = num1 + num2);
            break;
        case '-':
            printf("%.2f\n", res = num1 - num2);
            break;
        case '*':
            printf("%.2f\n", res = num1 * num2);
            break;
        case '/':
            printf("%.2f\n", res = num1 / num2);
            break;
        default:
            printf("Introduziu operador invalido!\n");
    }
    
    return 0;
}

