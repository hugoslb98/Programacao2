#include <stdio.h>
#include <stdlib.h>
#define E 1.15965
#define D 0.862329151

void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}

char lerChar(){
    char moeda;
    puts("Introduza a moeda para converter: ");
    scanf("%c", &moeda);
    limparBufferEntrada();
    return moeda;
}
 
double lerDouble(){
    double num;
    puts("Introduza um numero: ");
    scanf("%lf", &num);
    return num;
}

void converter(char moeda, double num){
    if(moeda == 'e'){
        printf("Sao: %.2lf dolares\n", num * D);
    }else{(moeda == 'd');
        printf("Sao: %.2lf euros\n", num * E);
    }
}

int main(int argc, char** argv) {
    double num;
    char moeda;
    
    moeda = lerChar();
    num = lerDouble();   
    
    converter(moeda, num);
    
    return 0;
}

