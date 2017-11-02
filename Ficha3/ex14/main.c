#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int cand1, cand2, cand3, cand4, branco, nulo, voto, totalVotos;
    
    do{
        puts("Qual e o seu voto (1,2,3,4,0-branco,9-nulo): ");
        scanf("%d", &voto);
        
        if(voto != -1){
            if(voto == 1){
                cand1 += 1;
            }else if(voto == 2){
                cand2 += 1;
            }else if(voto == 3){
                cand3 += 1;
            }else if(voto == 4){
                cand4 += 1;
            }else if(voto == 0){
                branco += 1;
            }else if(voto == 9){
                nulo += 1;
            }
            ++totalVotos;
        }
    } while (voto != -1);
    
    printf("O total de votos e: %d\n", totalVotos);
    printf("Candidato 1: %d votos\n", cand1);
    printf("Candidato 2: %d votos\n", cand2);
    printf("Candidato 3: %d votos\n", cand3);
    printf("Candidato 4: %d votos\n", cand4);
    printf("Total de votos em branco: %d\n", branco);
    printf("Total de votos nulos: %d\n", nulo);
    
    printf("Percentagem do candidato 1: %.2f%% votos\n", ((float)cand1 / totalVotos)*100);
    printf("Percentagem do candidato 2: %.2f%% votos\n", ((float)cand2 / totalVotos)*100);
    printf("Percentagem do candidato 3: %.2f%% votos\n", ((float)cand3 / totalVotos)*100);
    printf("Percentagem do candidato 4: %.2f%% votos\n", ((float)cand4 / totalVotos)*100);
    printf("Percentagem de votos em branco: %.2f%% votos\n", ((float)branco / totalVotos)*100);
    printf("Percentagem de votos nulos: %.2f%% votos\n", ((float)nulo / totalVotos)*100);      
    return 0;
}

