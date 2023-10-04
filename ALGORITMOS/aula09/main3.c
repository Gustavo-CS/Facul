#include <stdio.h>

int main()
{
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("o numero e negativo ");
    }
    else if (num > 0)
    {
        printf("o numero e positivo ");
    }
    else if (num == 0)
    {
        printf("o numero e zero ");
    }
    else
    {
        printf("erro! ");
    }
}