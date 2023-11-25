
#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario
{
    char nome[16];
    int idade;
    double salario;
} funcionario;

int main()
{
    funcionario funcionario;
    inicio(funcionario);
}

void inicio(funcionario funcionario)
{
    system("cls");
    cadOrPrint(funcionario);
}

void cadOrPrint(funcionario funcionario)
{
    system("cls");
    puts("1 | fazer cadastro");
    puts("2 | mostrar dados");
    puts("3 | sair");
    int value;
    scanf("%d", &value);
    getchar();
    fflush(stdin);

    switch (value)
    {
    case 1:
        system("cls");
        cadastro(funcionario);
        break;
    case 2:
        system("cls");
        mostrarDados(funcionario);
        break;
    case 3:
        system("cls");
        puts("volte sempre");
        break;
    default:
        system("cls");
        puts("Comando nao reconhecido \n");
        cadOrPrint(funcionario);
        break;
    }
}

void cadastro(funcionario funcionario)
{
    system("cls");
    puts("digite seu nome: ");
    fgets(funcionario.nome, 16, stdin);
    fflush(stdin);
    puts("digite sua idade: ");
    scanf("%d", &funcionario.idade);
    fflush(stdin);
    puts("digite seu salario: ");
    scanf("%lf", &funcionario.salario);
    fflush(stdin);

    puts("precione qualquer tecla para voltar ao menu");
    char teste;
    scanf("%c", &teste);
    system("cls");
    cadOrPrint(funcionario);
}

void mostrarDados(funcionario funcionario)
{
    printf("nome: %s \n", funcionario.nome);
    printf("idade: %d \n", funcionario.idade);
    printf("salario: %.2lf \n", funcionario.salario);
    puts("precione qualquer tecla para voltar ao menu");
    char teste;
    scanf("%c", &teste);
    system("cls");
    cadOrPrint(funcionario);
}