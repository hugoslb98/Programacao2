#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num1, num2, num3;
    
    puts("Introduza o primeiro");
    scanf("%d", &num1);
    puts("Introduza o segundo");
    scanf("%d", &num2);
    puts("Introduza o terceiro");
    scanf("%d", &num3);
    
    if (num1 < num2 && num1 < num3) {
        if (num2 < num3) {
            printf("%d %d %d\n", num1, num2, num3);
        } else {
            printf("%d %d %d\n", num1, num3, num2);
        }
         
    } 
    else if (num2 < num1 && num2 < num3) {
        if (num1 < num3) {
            printf("%d %d %d\n", num2, num1, num3);
        } else {
            printf("%d %d %d\n", num2, num3, num1);
        }
    }
    else if (num3 < num1 && num3 < num2) {
        if (num1 < num2) {
            printf("%d %d %d\n", num3, num1, num2);
        } else {
            printf("%d %d %d\n", num3, num2, num1);
        }
    }
    return 0;
}

