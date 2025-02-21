#include <stdio.h>

int main()
{
    int n = 5;
    int numDivisores = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            numDivisores++;
    printf("%d", numDivisores);
    return 0;
}