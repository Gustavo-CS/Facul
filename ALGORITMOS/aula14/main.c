#include <stdio.h>

int main()
{
    int i, b, soma = 0, soma2 = 0, soma3 = 0;
    float media;
    int notas[6];
    for (i = 1; i <= 6; i++)
    {
        printf("digite a nota %d: ", i);
        scanf("%d", &b);
        soma += b;
        notas[i] = b;
    }

    for (i = 1; i <= 6; i++)
    {
        if (notas[i] % 2 == 0)
        {
            printf("a nota no indice %d e: %d e e par \n", i, notas[i]);
        }
        else
        {
            printf("a nota no indice %d e: %d e e impar \n", i, notas[i]);
        }
    }

    media = (float)soma / 6;
    printf("\na media das notas e: %.2f \n", media);

    for (i = 2; i <= soma; i += 2)
    {
        soma2 += i;
        printf("%d \n", i);
    }
    printf("a soma de todos os numeros pares de 1 a %d e: %d \n", soma, soma2);

    for (i = 1; i <= soma; i += 2)
    {
        soma3 += i;
        printf("%d \n", i);
    }
    printf("a soma de todos os numeros impares de 1 a %d e: %d", soma, soma3);
}