// #include <stdio.h>

// int main()
// {
//     int num1, num2, sum, sub, mult;
//     float div;
//     printf("insira um numero ");
//     scanf("%d", &num1);
//     printf("insira outro numero ");
//     scanf("%d", &num2);
//     sum = num1 + num2;
//     sub = num1 - num2;
//     mult = num1 * num2;
//     div = (float)num1 / num2;
//     printf("o numero %d mais o numero %d e igual a: %d \n", num1, num2, sum);
//     printf("o numero %d menos o numero %d e igual a: %d \n", num1, num2, sub);
//     printf("o numero %d vezes o numero %d e igual a: %d \n", num1, num2, mult);
//     printf("o numero %d dividido pelo numero %d e igual a: %.2f ", num1, num2, div);
// }

// #include <stdio.h>

// int main()
// {
//     double celcius, fahrenheit;
//     printf("qual a temperatura em celcius? ");
//     scanf("%lf", &celcius);
//     fahrenheit = (celcius * 9 / 5) + 32;
//     printf("%.2lf graus celsius e equivalente a %.2lf em fahrenheit \n", celcius, fahrenheit);
// }

// #include <stdio.h>

// int main(){
//     double nota1,  nota2,  nota3,  media;
//     printf("Qual a nota 1 ");
//     scanf("%lf", &nota1);
//     printf("Qual a nota 2 ");
//     scanf("%lf", &nota2);
//     printf("Qual a nota 3 ");
//     scanf("%lf", &nota3);
//     media = (nota1 + nota2 + nota3)/3;
//     printf("A media e: %.2lf", media);
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double cap, juros, taxJu, t;
//     printf("Insira o valor do capital: ");
//     scanf("%lf", &cap);
//     printf("Insira o valor da taxa de juros anual: ");
//     scanf("%lf", &taxJu);
//     printf("Insira o tempo em anos: ");
//     scanf("%lf", &t);
//     juros = (cap * pow((1 + (taxJu / 100)), t)) - cap;
//     printf("A quantidade de juros obtida foi de: %.2lf", juros);
// }

// #include <stdio.h>

// int main(){
//     double dolar, taxa, result;
//     printf("qual o valor em dolar: ");
//     scanf("%lf", &dolar);
//     printf("qual a taxa de conversao: ");
//     scanf("%lf", &taxa);
//     result = dolar * taxa;
//     printf("%.2lf dolar e igaul a %.2lf apos convertido", dolar, result);
// }

// #include <stdio.h>

// int main(){
//     double nota1,  nota2,  nota3,  media, peso1, peso2, peso3;
//     printf("Qual a nota 1 ");
//     scanf("%lf", &nota1);
//     printf("Qual o peso da nota 1 ");
//     scanf("%lf", &peso1);
//     printf("Qual a nota 2 ");
//     scanf("%lf", &nota2);
//     printf("Qual o peso da nota 2 ");
//     scanf("%lf", &peso2);
//     printf("Qual a nota 3 ");
//     scanf("%lf", &nota3);
//     printf("Qual o peso da nota 3 ");
//     scanf("%lf", &peso3);
//     media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1 + peso2 + peso3);
//     printf("A media e: %.2lf", media);
// }

// #include <stdio.h>

// int main(){
//     double pol, cem;
//     printf("qual a medida em polegada? ");
//     scanf("%lf", &pol);
//     cem = pol * 2.54;
//     printf("%.2lf polegadas e igual a %.2lf centimetros", pol, cem);
// }