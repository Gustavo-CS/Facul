#include <stdio.h>

int main(){
    int anosT;
    char sexo;
    int idade;
    float peso;
    char doenca;

    printf("digite a qantidade de anos trabalhados: ");
    scanf("%i", &anosT);
    printf("digite o sexo [M] para masculino [F] para feminino: ");
    scanf(" %c", &sexo);
    printf("digite a sua idade: ");
    scanf("%i", &idade);
    printf("digite o seu peso: ");
    scanf("%f", &peso);
    printf("digite se voce tem alguma doenca [S] para sim e [N] para nao: ");
    scanf(" %c", &doenca);

    printf("anos trabalhados: %i\nsexo: %c\nidade: %i\npeso: %.1f\ntem doenca: %c", anosT, sexo, idade, peso, doenca);
}