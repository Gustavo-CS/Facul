#include <stdio.h>

int main()
{
    int num, ope, num1, num2;
    double peso, altura, resultado, raio, celcius, fahrenheit;
    printf("DIGITE: \n");
    printf("1 | para calcular o IMC \n");
    printf("2 | para calcular o operacoes basicas \n");
    printf("3 | para calcular o para calcular a area do circulo \n");
    printf("4 | para calcular o converter de celcius para fahrenheit \n");
    scanf(" %d", &num);
    switch (num)
    {
    case 1:
        printf("digite o peso: ");
        scanf(" %lf", &peso);
        printf("digite a altura: ");
        scanf(" %lf", &altura);
        resultado = peso / (altura * altura);
        printf("o IMC e: %.2lf", resultado);
        break;
    case 2:
        printf("digite um numero: ");
        scanf(" %d", &num1);
        printf("digite outro numero: ");
        scanf(" %d", &num2);
        printf("digite o operador : \n");
        printf("1 | adicao \n");
        printf("2 | subtracao \n");
        printf("3 | multiplicacao \n");
        printf("4 | divisao \n");
        scanf(" %d", &ope);
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
                
            }
            break;
        default:
            printf("erro");
            break;
        }
        break;
    case 3:
        printf("digite o raio do circulo: ");
        scanf(" %lf", &raio);
        resultado = 3.14 * raio * raio;
        printf("a area do circulo e: %.2lf", resultado);
        break;
    case 4:
        printf("qual a temperatura em celcius? ");
        scanf(" %lf", &celcius);
        fahrenheit = (celcius * 9 / 5) + 32;
        printf("%.2lf graus celsius e equivalente a %.2lf em fahrenheit \n", celcius, fahrenheit);
        break;
    default:
        printf("erro!");
        break;
    }
}
