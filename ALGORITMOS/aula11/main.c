#include <stdio.h>

int main() {
    unsigned int i = 2, n1;
    scanf("%d", &n1);
    while (i <= n1) {
        printf("%d \n", i);
        i+=2;
    }
}