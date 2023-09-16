#include <stdio.h>

int main()
{
    double celcius, kelvin, fahrenheit;
    printf("qual a temperatura em celcius? ");
    scanf("%lf", &celcius);
    fahrenheit = (celcius * 9 / 5) + 32;
    kelvin = celcius + 273.15;
    printf("%.2lf graus celsius e equivalente a %.2lf em fahrenheit \n", celcius, fahrenheit);
    printf("%.2lf graus celsius e equivalente a %.2lf em kelvin", celcius, kelvin);
}