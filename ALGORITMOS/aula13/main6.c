#include <stdio.h>

int main()
{
    int value, result = 1, valueSub;
    scanf("%d", &value);
    // valueSub = value;
    for (int i = 1; i <= value; i++)
    {
        result *= i;
    }
    printf("o fatorial de %d e %d", value, result);

}