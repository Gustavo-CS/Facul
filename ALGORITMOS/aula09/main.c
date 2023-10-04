#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    if (num%2==0){
        printf("o numero e par");
    }else {
        printf("o numero e impar");
    }
}
