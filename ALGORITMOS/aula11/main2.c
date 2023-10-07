#include <stdio.h>

int main()
{
    int n1, soma = 0;
    while (1)
    {
        
        scanf("%d", &n1);
        if (n1 < 0){
            break;
        }
        soma += n1;
        printf("a soma e %d \n", soma);
        
    }
}