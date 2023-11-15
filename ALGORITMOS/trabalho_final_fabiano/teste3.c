#include <stdio.h>

int main() {
    char three_char = '3';
    int three_int = three_char - '0';
    int result = three_int + 1;

    printf("%c + 1 is %d\n", three_char, result);
}
