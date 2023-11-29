#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    char nome[50];
    int matricula;
    int notas[3];
    float media;
    char resultado[15];
};

int main()
{
    struct Aluno alunos[3];
    cadastro(alunos);
    relatorio(alunos);
}

void cadastro(struct Aluno alunos[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 50, stdin);
        printf("digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        for (int j = 0; j < 3; j++)
        {
            printf("digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%d", &alunos[i].notas[j]);
            fflush(stdin);
        }
        alunos[i].media = (float)(alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3;
        if (alunos[i].media >= 7)
        {
            strcpy(alunos[i].resultado, "Aprovado");
        }
        else if (alunos[i].media >= 5 && alunos[i].media < 7)
        {
            strcpy(alunos[i].resultado, "de Recuperacao");
        }
        else if (alunos[i].media < 5)
        {
            strcpy(alunos[i].resultado, "Reprovado");
        }
    }
    system("cls");
}

void relatorio(struct Aluno alunos[3])
{
    system("cls");
    for (int i = 0; i < 3; i++)
    {
        printf("o nome do aluno %d e: %s ", i + 1, alunos[i].nome);
        printf("a matricula do aluno %d e: %d \n", i + 1, alunos[i].matricula);
        for (int j = 0; j < 3; j++)
        {
            printf("a nota %d do aluno %d e: %d \n", j + 1, i + 1, alunos[i].notas[j]);
        }
        printf("A media do aluno %d e: %.2f \n", i + 1, alunos[i].media);
        printf("O aluno %d esta %s \n", i + 1, alunos[i].resultado);
    }
}