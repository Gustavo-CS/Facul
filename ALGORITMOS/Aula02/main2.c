#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: \n");
    scanf("%i", &idade); // o vscode não consegue ler, por que????? porque faltava o compilador
    printf("idade digitada: %i", idade);
    return 0; 
}
