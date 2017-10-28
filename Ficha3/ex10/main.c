#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, num = 1;
    
    while(num <= 10){
        for(i = 1; i <= 10; ++i){
        printf("%d * %d = %d\n", num, i, num * i);
    }
        printf("\n"); 
        ++num;
    }
    return 0;
}

