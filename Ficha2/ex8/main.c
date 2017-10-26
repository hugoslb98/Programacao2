#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int horaentrada, minentrada, horasaida, minsaida, entradaTotal, saidaTotal, horas;
    
    puts("Introduza a hora e os minutos da entrada: ");
    scanf("%d%d", &horaentrada, &minentrada);
    puts("Introduza a hora e os minutos da saida: ");
    scanf("%d%d", &horasaida, &minsaida);
    
    entradaTotal = (horaentrada + minentrada) *  3600;
    saidaTotal = (horasaida + minsaida) * 3600;
    horas =(saidaTotal - entradaTotal);
    
    if(horas < 0){
        horas = (24 *3600) + horas;
    }
    
    printf("O funcionario trabalhou %d horas e %d minutos\n", horas / 3600, horas % (3600 /60));
    
    return 0;
}

