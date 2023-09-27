#include <stdio.h>

int main(){
    double saldo, saque;
    printf("digite quanto quer sacar: ");
    scanf("%lf", &saque);
    printf("digite o seu saldo: ");
    scanf("%lf", &saldo);

    if (saque <= saldo){
        saldo-=saque;
        printf("saque realizado \nnovo saldo %.2lf", saldo);

    } else {
        printf("saldo insuficiente");
    }
}