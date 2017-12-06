#include <stdio.h>
#include "utils.h"
#define MATRIZTAM 9

void clean_buffer(){ 
    char ch; 
    while ((ch = getchar()) != '\n' && ch != EOF); 
}