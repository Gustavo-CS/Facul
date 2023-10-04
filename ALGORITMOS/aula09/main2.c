#include <stdio.h>

int main(){
    double nota1,  nota2,  nota3,  media;
    printf("Qual a nota 1 ");
    scanf("%lf", &nota1);
    printf("Qual a nota 2 ");
    scanf("%lf", &nota2);
    printf("Qual a nota 3 ");
    scanf("%lf", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    if (media >= 7){
        printf("aprovado \n");
    }
    else {
        printf("reprovado \n");
    }
    printf("A media e: %.2lf", media);
}