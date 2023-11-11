
#include <stdio.h>
#include <stdlib.h>

void login(char usuario[16], char senha[16])
{
    char usuarioLogin[16];
    char senhaLogin[16];
    puts("digite seu usuario: ");
    fgets(usuarioLogin, 9, stdin);
    fflush(stdin);
    puts("digite sua senha: ");
    fgets(senhaLogin, 9, stdin);
    fflush(stdin);
    // if(senha == ){
    //     login();
    // }
    if (usuario == 1 || senha == 1){
        
    }
    usuarioLogin[strcspn(usuarioLogin, "\n")] = '\0';
    senhaLogin[strcspn(senhaLogin, "\n")] = '\0';
    int usuarioVerificado = strcmp(usuario, usuarioLogin);
    int senhaVerificada = strcmp(senha, senhaLogin);
    // int vvv = 1;
    if (senhaVerificada == 0 && usuarioVerificado == 0)
    {
        system("cls");
        nomePetShop();
        // main();
    }
    else
    {
        system("cls");
        puts("Login incorreta!\nTente novamente");
        login(usuario, senha);
    }
    // system("cls");
    // puts("Login incorreta!\nTente novamente");
    // login(usuario, senha);
}

void cadastro()
{
    char usuarioCadastro[16];
    char senhaCadastro[16];
    puts("digite seu usuario: ");
    fgets(usuarioCadastro, 9, stdin);
    fflush(stdin);
    puts("digite sua senha: ");
    fgets(senhaCadastro, 9, stdin);
    fflush(stdin);
    // if(senha == ){
    //     Cadastro();
    // }
    usuarioCadastro[strcspn(usuarioCadastro, "\n")] = '\0';
    senhaCadastro[strcspn(senhaCadastro, "\n")] = '\0';

    main(usuarioCadastro, senhaCadastro);
}

void nomePetShop()
{
    puts("Super PetShop Gustavo BCC");
}

void cadOrLogin(usuario, senha)
{
    int value;
    puts("1 | cadastrar cliente");
    puts("2 | fazer login");
    scanf("%d", &value);
    fflush(stdin);

    switch (value)
    {
    case 1:
        system("cls");
        cadastro();
        break;
    case 2:
        system("cls");
        login(usuario, senha);
        break;
    default:
        break;
    }
}

int main(char usuario[16], char senha[16])
{
    puts("\n MAIN \n");

    cadOrLogin(usuario, senha);
    return 0;
}

// void myFunction() {
//   printf("I just got executed! \n");
// }

// int main() {
//   myFunction();
//   myFunction();
//   myFunction();
//   return 0;
// }