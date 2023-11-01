// Crie um programa em C que solicita ao usuário inserir 6 notas em numeros inteiros, calcula a média dessas notas e imprime a média, com o resultado da soma das notas faça a soma de todos os números pares compreendidos na soma e imprima na tela, e faça o mesmo para os números impares e imprima na tela deve-se usar a estrutura de repetição for.


#include <stdio.h>

int main() {
    int nota, soma = 0, soma2 = 0, soma3 = 0;
    float media;
    for(int i = 1; i <= 6; i++){
        printf("digite a nota %d: ", i);
        scanf("%d",&nota);
        soma += nota;
    } 
    media = (float)soma/6;
    printf("\na media das notas e: %.2f \n", media);

    for (int i = 2; i <= soma; i+=2){
        soma2 += i;
    }
    printf("a soma de todos os numeros pares de 1 a %d e: %d \n", soma, soma2);


    for (int i = 1; i <= soma; i+=2){
        soma3 += i;
    }
    printf("a soma de todos os numeros impares de 1 a %d e: %d", soma, soma3);

}