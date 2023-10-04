#include <stdio.h>

int main() {
    int idade;
    printf("digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 0 && idade <13){
        printf("crianca");
    } else if (idade >= 13 && idade <20){
        printf("adolescente");
    } else if (idade >= 20 && idade <60){
        printf("adulto");
    } else if (idade >= 60 && idade < 121){
        printf("idoso");
    } else if (idade >= 121){
        printf("tartaruga");
    }else if (idade >= 600){
        printf("imortal");
    } else{
        printf("erro");
    }
}