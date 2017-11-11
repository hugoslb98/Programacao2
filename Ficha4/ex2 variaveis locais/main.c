#include <stdio.h>
#include <stdlib.h>

long soma(float num1, float num2){
    return num1 + num2;
}
long subtracao(float num1, float num2){
    return num1 - num2;
}
float multiplicacao(float num1, float num2){
    return num1 * num2;
}
long divisao(float num1, float num2){
    return num1 / num2;
}
int main(int argc, char** argv) {
    
    char  op;
    float num1, num2, res;
    puts("Introduza um numero: ");
    scanf("%f", &num1);
    
    puts("Introduza outro numero: ");
    scanf("%f", &num2);
    
    puts("Introduza a operacao: ");
    scanf("%f", &op);
    
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