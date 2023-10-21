//"continue" pula o resto da estrutura e passa pra proxima repetição

#include <stdio.h>

int main() {
    for(int i = 0; i < 10; i++){
        if(i==5){
            continue; //quando for 5 ele pula o laço e passa pra proxima repetição
            // break;
        }
        printf("%d \n", i); 
    }
}