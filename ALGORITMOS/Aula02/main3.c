#include <stdio.h>

int main() {
    int ano;
    int idade;
    float salario;

    printf("digite o ano do seu nascimento: ");
    scanf("%i", &ano);
    printf("digite a sua idade: ");
    scanf("%i", &idade);
    printf("digite o seu salario: ");
    scanf("%f", &salario);

    printf("%i, %i, %.2f", ano, idade, salario);
    return 0;
}