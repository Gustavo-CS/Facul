#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d x %d = %d \n", num, i, i * num);
    }
}