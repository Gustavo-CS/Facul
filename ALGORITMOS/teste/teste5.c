#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char usuario[16];
    char senha[16];
    char pets[10][16];
} myDados;

int main()
{
    myDados veetor[10];
    fgets(veetor[0].pets[0], 15, stdin);
    puts(veetor[0].pets[0]);
}