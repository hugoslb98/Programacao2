#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int min;
    double horas, velMedia, posto;
    
    //Introduzir o tempo
    puts("Em quanto tempo pretende fazer a viagem ? ");
    scanf("%d", &min);
    
    horas = min / 60.0; //conversao de minutos para horas
    
    velMedia = (130 / horas); //calculo da velocidade media
    
    //Estrutura condicional
    if (velMedia <= 60) {
        posto = 400 / 5;
        if (posto < 60){
            printf("Nao tem como fazer a viagem !!\n");
        }
        else if (posto >= 60 && posto < 70){
             printf("Tera de abastecer no posto de combustivel aos 60 km !!\n");
        }
        else if (posto >= 70 && posto < 79){
             printf("Tera de abastecer no posto de combustivel aos 70 km !!\n");
    }
        else {
            printf("Tera de abastecer no posto de combustivel aos 79 km !!\n");
        } 
    }
    
    else if (velMedia > 60 && velMedia <= 120) {
        posto = 400 / 6;
        if (posto < 60){
            printf("Nao tem como fazer a viagem !!\n");
        }
        else if (posto >= 60 && posto < 70){
             printf("Tera de abastecer no posto de combustivel aos 60 km !!\n");
        }
        else if (posto >= 70 && posto < 79){
             printf("Tera de abastecer no posto de combustivel aos 70 km !!\n");
    }
        else {
            printf("Tera de abastecer no posto de combustivel aos 79 km !!\n");
        }
    } else {
        posto = 400 / 7;
        if (posto < 60){
            printf("Nao tem como fazer a viagem !!\n");
        }
        else if (posto >= 60 && posto < 70){
             printf("Tera de abastecer no posto de combustivel aos 60 km !!\n");
        }
        else if (posto >= 70 && posto < 79){
             printf("Tera de abastecer no posto de combustivel aos 70 km !!\n");
    }
        else {
            printf("Tera de abastecer no posto de combustivel aos 79 km !!\n");
        }
    }
    return 0;
} 
    

