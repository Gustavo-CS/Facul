#include <stdio.h>

int main(){
    int idade;
    float peso;
    float altura;
    float salario;

    printf("digite o seu peso: ");
    scanf("%f", &peso);
    printf("digite a sua idade: ");
    scanf("%i", &idade);
    printf("digite a sa altura: ");
    scanf("%f", &altura);
    printf("digite o seu salario: "),;
    scanf("%f", &salario);

    printf("peso: %.3f\nidade: %i\naltura: %.3f\nsalaraio: %.3f\n", peso, idade, altura, salario);
}