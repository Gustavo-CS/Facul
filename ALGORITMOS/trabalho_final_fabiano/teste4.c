#include <stdio.h>

int main() {
    char char1 [5] = "1234";
    char char2 [7] = " 5678";
    // char result [12] = 
    strcat(char1, char2);

    printf("%s\n", char1);
}
