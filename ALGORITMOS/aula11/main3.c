#include <stdio.h>

int main()
{
    int total = 0, n1, numEntradas = 0;

    while (1)
    {
        scanf("%d", &n1);
        if (n1 < 0)
        {
            break;
        }
        total += n1;
        numEntradas++;
    }
    float media = total / numEntradas;
    printf("a media da soma %i e %f", total, media);
}