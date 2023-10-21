#include <stdio.h>

int main() {
    int soma = 0;
    for(int i = 2; i <=100; i+=2) {
        soma+=i;
    }
    printf("%d", soma);
}