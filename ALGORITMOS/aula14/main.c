#include <stdio.h>

int main()
{
    int acertos = 0;
    char alternativa;
    // Questao 1
    while (1)
    {

        printf(" \n Questao 1: Qual e a sintaxe correta para declarar uma variavel inteira em C? \n ");
        printf("a) int x; \n ");
        printf("b) var x; \n ");
        printf("c) integer x; \n ");
        printf("d) numero x; \n ");
        scanf(" %c", &alternativa);

        if (alternativa == 'a')
        {
            printf(" voce acertou!!");
            acertos++;
            break;
        }
        else if (alternativa == 'b' || alternativa == 'c' || alternativa == 'd')
        {
            printf(" voce errou ):");
            break;
        }

    } // Questao 2
    while (1)
    {

        printf(" \n Questao 2: Qual e a funcao usada para imprimir no console em C? \n ");
        printf("a) print(); \n ");
        printf("b) console.log(); \n ");
        printf("c) printtext(); \n ");
        printf("d) printf(); \n ");
        scanf(" %c", &alternativa);

        if (alternativa == 'd')
        {
            printf(" voce acertou!!");
            acertos++;
            break;
        }
        else if (alternativa == 'a' || alternativa == 'b' || alternativa == 'c')
        {
            printf(" voce errou ):");
            break;
        }

    } // Questao 3
    while (1)
    {

        printf(" \n Questao 3: O que o operador '==' faz em C? \n ");
        printf("a) Atribui um valor a uma variavel. \n ");
        printf("b) Compara dois valores. \n ");
        printf("c) Divide dois valores. \n ");
        printf("d) Multiplica dois valores. \n ");
        scanf(" %c", &alternativa);

        if (alternativa == 'b')
        {
            printf(" voce acertou!!");
            acertos++;
            break;
        }
        else if (alternativa == 'a' || alternativa == 'c' || alternativa == 'd')
        {
            printf(" voce errou ):");
            break;
        }

    } // Questao 4
    while (1)
    {

        printf(" \n Questao 4: Qual e o operador logico para 'OU' em C? \n ");
        printf("a) && \n ");
        printf("b) || \n ");
        printf("c) ! \n ");
        printf("d) <> \n ");
        scanf(" %c", &alternativa);

        if (alternativa == 'b')
        {
            printf(" voce acertou!!");
            acertos++;
            break;
        }
        else if (alternativa == 'a' || alternativa == 'c' || alternativa == 'd')
        {
            printf(" voce errou ):");
            break;
        }

    } // Questao 5
    while (1)
    {

        printf(" \n Questao 5: Qual e a estrutura de controle usada para repeticao em C? \n ");
        printf("a) if \n ");
        printf("b) switch \n ");
        printf("c) for \n ");
        printf("d) else \n ");
        scanf(" %c", &alternativa);

        if (alternativa == 'c')
        {
            printf(" voce acertou!!");
            acertos++;
            break;
        }
        else if (alternativa == 'a' || alternativa == 'b' || alternativa == 'd')
        {
            printf(" voce errou ):");
            break;
        }

    } // Questao 6
    while (1)
    {

        printf(" \n Questao 6: Qual e a funcao usada para ler um numero inteiro do teclado em C? \n ");
        printf("a) read_integer(); \n ");
        printf("b) input_int(); \n ");
        printf("c) scanf(); \n ");
        printf("d) get_int(); \n ");
        scanf(" %c", &alternativa);

        if (alternativa == 'c')
        {
            printf(" voce acertou!!");
            acertos++;
            break;
        }
        else if (alternativa == 'a' || alternativa == 'b' || alternativa == 'd')
        {
            printf(" voce errou ):");
            break;
        }

    } // Questao 7
    while (1)
    {

        printf("  \n Questao 7: Qual e o valor da expressao 5 + 3 * 2 em C? \n ");
        printf("a) 16 \n ");
        printf("b) 11 \n ");
        printf("c) 13 \n ");
        printf("d) 10 \n ");
        scanf(" %c", &alternativa);

        if (alternativa == 'b')
        {
            printf(" voce acertou!!");
            acertos++;
            break;
        }
        else if (alternativa == 'a' || alternativa == 'c' || alternativa == 'd')
        {
            printf(" voce errou ):");
            break;
        }
    }
    printf(" \n \nvoce acertou %d questoes", acertos);
}