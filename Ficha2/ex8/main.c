#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int horaentrada, minentrada, horasaida, minsaida, entradaTotal, saidaTotal, horas;
    
    puts("Introduza a hora e os minutos da entrada: ");
    scanf("%d%d", &horaentrada, &minentrada);
    puts("Introduza a hora e os minutos da saida: ");
    scanf("%d%d", &horasaida, &minsaida);
    
    entradaTotal = (horaentrada * 3600) +  minentrada;
    saidaTotal = (horasaida * 3600) + minsaida;
    horas =(saidaTotal - entradaTotal);
    
    if(horas < 0){
        horas = horas + (24 * 3600);
    }
    
    printf("O funcionario trabalhou %d horas e %d minutos\n", (horas / 3600), horas % (3600 /60));
    
    return 0;
}

