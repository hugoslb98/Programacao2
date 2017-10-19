#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int horpart, minpart, horcheg, mincheg, horparts, minparts ,segpart, horchegs, minchegs, segcheg, difseg, litros;
    float distperc, combmedio;
    
    //Introducao de dados
    puts("Introduza a quantidade de combustivel (em litro) gasto: ");
    scanf("%d", &litros);
    puts("Introduza a hora e os minutos de partida: ");
    scanf("%d%d", &horpart, &minpart);
    puts("Introduza a hora e os minutos de chegada: ");
    scanf("%d%d", &horcheg, &mincheg);
    puts("Introduza a distancia percorrida: ");
    scanf("%f", &distperc);
    
    //Calculo de tempo de viagem
    horparts = horpart * 3600;
    minparts = minpart * 60;
    segpart = horparts + minparts;
    
    horchegs = horcheg * 3600;
    minchegs = mincheg * 60;
    segcheg = horchegs + minchegs;
    
    difseg = segcheg - segpart;
   
    //Calculo do consumo medio de combustivel
    combmedio = litros / distperc;
    
    printf("O tempo de viagem e: %d horas %d minutos\n", difseg/3600, difseg%3600/60);
    printf("A velocidade media e: %.2lf km/h\n", distperc/(difseg/3600));
    printf("O consumo medio de combustivel e: %.2f litros/km\n", combmedio);
    return 0;
}

