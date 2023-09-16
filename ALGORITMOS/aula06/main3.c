#include <stdio.h>

int main()
{
    double lado1, lado2, area;
    printf("qual a largura do terreno? (em metros) ");
    scanf("%lf", &lado1);
    printf("qual o comprimento do terreno? (em metros) c");
    scanf("%lf", &lado2);
    area = lado1*lado2;
    printf("a area do terreno e: %lf", area);
}