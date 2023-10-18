#include <stdio.h>

int main()
{
    int n1;
    scanf("%d", &n1);

    do
    {
        printf("%d \n", n1);
        n1-=1;
    } while (n1 != 0);
}

