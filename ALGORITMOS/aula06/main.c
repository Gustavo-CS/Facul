#include <stdio.h>

int main(){
    double nota1,  nota2,  nota3,  media;
    printf("Qual a nota do primeiro aluno? ");
    scanf("%lf", &nota1);
    printf("Qual a nota do segundo aluno? ");
    scanf("%lf", &nota2);
    printf("Qual a nota do terceiro aluno? ");
    scanf("%lf", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("A media e: %.2lf", media);
}