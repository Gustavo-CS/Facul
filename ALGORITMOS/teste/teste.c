
#include <stdio.h>
#include <stdlib.h>

int main(char usuario[16], char senha[16])
{
    puts("\n MAIN \n");
    char arrTeste [6][10][25];
    // arrTeste [0][0][0] = "p";
    // arrTeste [0][0][1] = "o";
    // arrTeste [0][0][2] = "o";
    // arrTeste [0][0][3] = "r";
    // arrTeste [0][0][4] = "r";
    // arrTeste [0][0][5] = "a";
    // puts(arrTeste[0][0][0]);
    
    //[10 usuarios] [ate 15 caracteres] [as 6 coisas guardadas, usuario, senha, telefone, pet, banho, consulta]

    //[as 7 coisas guardadas, [0]usuario, [1]senha, [2]nome, [3]telefone, [4]pet, [5]banho, [6]consulta] [10 usuarios] [10 pets se precisar, o resto coloca tudo no 0] [ate 15 caracteres]

    // for(int i = 0; i<10; i++){
    //     for (int j = 0; arrTeste[0][j] != '\0'; j++){

    //     }
    // }
    fgets(arrTeste[0][0], 25, stdin);
    fflush(stdin);

    printf("%s", arrTeste[0][0]);


    return 0;
}