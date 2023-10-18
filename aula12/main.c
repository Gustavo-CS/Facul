#include <stdio.h>

int main()
{
    int total = 0, n1;

    do
    {
        scanf("%d", &n1);
        total += n1;
    } while (n1 != 0);
    printf("a soma e %d", total);
}