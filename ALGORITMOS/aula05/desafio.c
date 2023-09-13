#include <stdio.h>

int main()
{
    float salarioMinimo;
    float seuSalario;
    float resultado;

    printf("digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("digite o seu salario: ");
    scanf("%f", &seuSalario);
    resultado = seuSalario / salarioMinimo;

    if (resultado > 1)
    {
        printf("O seu salario e de %.2fx o salario minimo", resultado);
    }
    else if (resultado == 1)
    {
        printf("O seu salario e igual ao salario minimo");
    }
    else if (resultado < 1)
    {
        printf("processa a empresa, p seu salario e de %.2fx o salario minimo", resultado);
    }
    else
    {
        printf("erro!");
    }
}