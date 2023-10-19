#include <stdio.h>

int main()
{
    int value, result = 1, valueSub;
    scanf("%d", &value);
    valueSub = value;
    if (value <= 0)
    {
        printf("a");
    }
    else
    {
        do
        {

            result *= valueSub;
            valueSub--;
        } while (valueSub != 0);
        printf("o fatorial de %d e %d", value, result);
    }
}