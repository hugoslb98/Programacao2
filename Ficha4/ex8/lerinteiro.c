/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

int lerInteiro(int min, int max){
    int num;
   
    while(1){
    
        printf("Introduza as notas entre %d e %d: ", min, max);
        scanf("%d", &num);
        if(num >= min & num <= max){
        break;
        }
    }
    return num;
}
