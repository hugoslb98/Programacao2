#include <stdio.h>
#include <stdlib.h>

void limparBufferEntrada(){ 
    char ch; while ((ch = getchar()) != '\n' && ch != EOF);
}
int main(int argc, char** argv) {
    int idade, estCivil, idadeMaior = 0, idadeMenor = 150;
    char sexo;
    double sal, salMin, salCont, salFinal, salMedia;
    
    do{
        puts("Introduza a idade: ");
        scanf("%d", &idade);
        
        if (idade == -1)
        {
            break;
        }
        if(idade > idadeMaior){
            idadeMaior = idade;
        }
        if(idade < idadeMenor){
            idadeMenor = idade;
        }
        
        limparBufferEntrada();
        
        puts("Introduza o sexo: ");
        scanf("%c", &sexo);
       
        if(sexo == 'm'){
            printf("Masculino\n");
        }else if (sexo == 'f'){
            printf("Feminino\n");
        }
        
        puts("Introduza o estado civil: 1-solteiro, 2-casado, 3-divorciado, 4-viuvo");
        scanf("%d", &estCivil);
        
        if(estCivil == 1){
            printf("Solteiro\n");
        }else if(estCivil == 2){
            printf("Casado\n");
        }else if(estCivil == 3){
            printf("Divorciado\n");
        }else if(estCivil == 4){
            printf("Viuvo\n");
        }   
        
        puts("Introduza o salario: ");
        scanf("%lf", &sal);
        if(sal > salMin){
            salCont++;
            salFinal += sal;
        }
       
    } while (idade >= 0);
    
    salMedia = salFinal / salCont;
    
    printf("A maior idade e: %d\n", idadeMaior);
    printf("A menor idade e: %d\n", idadeMenor);
    printf("A media do salario e: %.2lf\n", salMedia);
    
    return 0;
}
