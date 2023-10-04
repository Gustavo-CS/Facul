#include <stdio.h>

int main()
{
    int num1, num2, ope;
    printf("digite um numero: ");
    scanf("%d", &num1);
    printf("digite outro numero: ");
    scanf("%d", &num2);
    printf("digite o operador : \n");
    printf("1 | adicao \n");
    printf("2 | subtracao \n");
    printf("3 | multiplicacao \n");
    printf("4 | divisao \n");
    scanf(" %d", &ope);

    // __fpurge(stdin);
    switch (ope)
    {
    case 1:
        printf("o resultado e %d", num1 + num2);
        break;
    case 2:
        printf("o resultado e %d", num1 - num2);
        break;
    case 3:

        printf("o resultado e %d", num1 * num2);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("nao pode dividir por zero");
        }
        else
        {
            printf("o resultado e %.2f", (float)num1 / num2);
            break;
        }
    default:
        printf("erro");
        break;
    }
}