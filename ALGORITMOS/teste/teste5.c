#include <stdio.h>
#include <stdlib.h>

struct myDados
{
    char usuario[16];
    char senha[16];
    char pets[10][16];
};

int main()
{
    struct myDados veetor[10];
    fgets(veetor[0].pets[0], 15, stdin);
    puts(veetor[0].pets[0]);
}