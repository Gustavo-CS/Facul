#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int ale = rand() % 1000 + 1, tent = 7, i;
    // printf("%d \n", ale);
    printf("voce tem sete tentativas para acertar um numero aleatorio entre 1 e 1000");
    do
    {
        printf("\ndigite um numero: ");
        scanf("%d", &i);
        tent--;
        if (i == ale)
        {
            break;
        }
        else if (tent == 0){
            break;
        }
        else if (i < ale)
        {
            printf("o numero e maior");
        }else if (i > ale)
        {
            printf("o numero e menor");
        }

    } while (tent != 0 && i != ale);

    if (i == ale)
    {
        printf("voce gamhou");
    }
    else if (tent == 0)
    {
        printf("voce perdeu o numero era %d", ale);
    }
    else
    {
        printf("erro");
    }

    return 0;
}
