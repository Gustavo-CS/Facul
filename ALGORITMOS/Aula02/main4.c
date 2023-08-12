#include <stdio.h>

int main()
{
    int dia;
    int mes;
    int ano;

    printf("digite o dia do seu nascimento: ");
    scanf("%i", &dia);
    printf("digite o mes do seu nascimento: ");
    scanf("%i", &mes);
    printf("digite o ano do seu nascimento: ");
    scanf("%i", &ano);

    printf("%i/%i/%i", dia, mes, ano);
    return 0;
}