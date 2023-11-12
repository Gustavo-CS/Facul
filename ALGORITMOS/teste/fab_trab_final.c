
#include <stdio.h>
#include <stdlib.h>
// criar um map chave valor

struct myDados
{
    char usuario[16];
    char senha[16];
    char nome[16];
    char telefone[16];
    char nomePet[10][16];
    int numPet;
    int banhoETosa[10][16];
    int numBanho;
    char consulta[10][16];
    int numConsulta;
};

//[as 7 coisas guardadas, [0]usuario, [1]senha, [2]nome, [3]telefone, [4]pet, [5]banho, [6]consulta] [10 usuarios] [10 pets se precisar, o resto coloca tudo no 0] [ate 15 caracteres]

// comecar no main e nele iniciar todas as variaveis e nao voltar nele
//  funcionalizar tudouggxxz
int main()
{
    struct myDados veetor[10];
    int boll = 0;
    inicio(veetor, boll);
    return 0;
}

void inicio(struct myDados veetor[10], int boll)
{
    system("cls");
    // if (arrValores[0][0] != 'teste' )
    // {
    //     // printf("%s \n", arrValores[0][0]);
    //     // printf("%s \n", arrValores[1][0]);
    //     puts("porrra");
    // }
    // arrTeste [0][0][0] = "p";
    // arrTeste [0][0][1] = "o";
    // arrTeste [0][0][2] = "o";
    // arrTeste [0][0][3] = "r";
    // arrTeste [0][0][4] = "r";
    // arrTeste [0][0][5] = "a";
    // puts(arrTeste[0][0][0]);

    //[as 7 coisas guardadas, [0]usuario, [1]senha, [2]nome, [3]telefone, [4]pet, [5]banho, [6]consulta] [10 usuarios] [10 pets se precisar, o resto coloca tudo no 0] [ate 15 caracteres]

    // for(int i = 0; i<10; i++){
    //     for (int j = 0; arrTeste[0][j] != '\0'; j++){

    //     }
    // }

    cadOrLogin(veetor, boll);
}

void cadOrLogin(struct myDados veetor[10], int boll)
{
    system("cls");
    int value;
    puts("1 | cadastrar cliente");
    puts("2 | fazer login");
    puts("3 | sair");
    scanf("%d", &value);
    getchar();
    fflush(stdin);

    switch (value)
    {
    case 1:
        system("cls");
        cadastro(veetor, boll);
        break;
    case 2:
        system("cls");
        login(veetor, boll);
        // teste(arrValores);
        break;
    case 3:
        system("cls");
        puts("Volte sempre ao Super PetShop Gustavo BCC");
        break;
    default:
        system("cls");
        puts("Comando nao reconhecido \n");
        cadOrLogin(veetor, boll);
        break;
    }
}

// void teste(char arrValores[7][10][10][16])
// {
//     printf("%s \n", arrValores[0][0][0]);
//     printf("%s \n", arrValores[1][0][0]);
// }

void cadastro(struct myDados veetor[10], int boll)
{
    // char usuarioCadastro[16];
    // char senhaCadastro[16];

    system("cls");
    int i = 0;
    puts("digite seu usuario: ");
    fgets(veetor[0].usuario, 15, stdin);
    fflush(stdin);
    // while ((ch = getchar()) != '\n' && ch != EOF);
    puts("digite sua senha: ");
    fgets(veetor[0].senha, 15, stdin);
    fflush(stdin);
    // while ((ch = getchar()) != '\n' && ch != EOF);
    // if(senha == ){
    //     Cadastro();
    // }
    veetor[0].usuario[strcspn(veetor[0].usuario, "\n")] = '\0';
    veetor[0].senha[strcspn(veetor[0].senha, "\n")] = '\0';
    // arrValores[0][i][0] = usuarioCadastro;
    // for
    boll = 1;
    system("cls");
    inicio(veetor, boll);
}

void login(struct myDados veetor[10], int boll)
{
    system("cls");
    // int i = 0;
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
    if (boll == 1)
    {
        usuarioLogin[strcspn(usuarioLogin, "\n")] = '\0';
        senhaLogin[strcspn(senhaLogin, "\n")] = '\0';
        int usuarioVerificado = strcmp(veetor[0].usuario, usuarioLogin);
        int senhaVerificada = strcmp(veetor[0].senha, senhaLogin);
        if (senhaVerificada == 0 && usuarioVerificado == 0)
        {
            menu(veetor);
            // inicio();
        }
        else
        {
            system("cls");
            puts("Login incorreta! boll\n");

            int value;
            puts("1 | Tentar novamente");
            puts("2 | voltar ao menu");
            scanf("%d", &value);
            getchar();
            fflush(stdin);

            switch (value)
            {
            case 1:
                system("cls");
                login(veetor, boll);
                break;
            case 2:
                system("cls");
                inicio(veetor, boll);
                break;
            default:
                puts("erro");
                login(veetor, boll);
                break;
            }
        }
    }
    else
    {
        system("cls");
        puts("Login incorreta!\n");

        int value;
        puts("1 | Tentar novamente");
        puts("2 | voltar ao menu");
        scanf("%d", &value);
        getchar();
        fflush(stdin);

        switch (value)
        {
        case 1:
            system("cls");
            login(veetor, boll);
            break;
        case 2:
            system("cls");
            inicio(veetor, boll);
            break;
        default:
            puts("erro");
            login(veetor, boll);
            break;
        }
    }
}

void nomePetShop()
{
    puts("Super PetShop Gustavo BCC");
}

menu(struct myDados veetor[10])
{
    system("cls");
    nomePetShop();
    int value;
    puts("1 | Cadastrar cliente");
    puts("2 | Agendar banho e tosa");
    puts("3 | Agendar consulta");
    puts("4 | Imprimir relatorio geral");
    puts("5 | Sair");
    scanf("%d", &value);
    getchar();
    fflush(stdin);

    switch (value)
    {
    case 1:
        system("cls");
        cadastrarCliente(veetor);
        break;
    case 2:
        system("cls");
        banhoTosa(veetor);
        break;
    // case 3:
    //     system("cls");
    //     inicio(usuario, senha);
    //     break;
    // case 4:
    //     system("cls");
    //     inicio(usuario, senha);
    //     break;
    case 5:
        system("cls");
        puts("Volte sempre ao Super PetShop Gustavo BCC");
        inicio(veetor, 1);
        break;
    default:
        system("cls");
        puts("Opcao incorreta \n");
        menu(veetor);
        break;
    }
}

void cadastrarCliente(struct myDados veetor[10])
{
    system("cls");
    nomePetShop();
    printf("\nCadastro de cliente\n");
    printf("\nDigite seu nome: \n");
    fgets(veetor[0].nome, 15, stdin);
    fflush(stdin);
    printf("\nDigite seu telefone: (so os numeros)\n");
    fgets(veetor[0].telefone, 15, stdin);
    fflush(stdin);
    char car;
    // int i = 0;
    int totalPet = 0;
    do
    {
        system("cls");
        printf("\nDigite o nome do seu pet [max 10]\n");
        fgets(veetor[0].nomePet[totalPet], 15, stdin);
        fflush(stdin);
        puts("continuar? \n[s] para sim\n[n] para nao\n");
        scanf("%c", &car);
        getchar();
        totalPet++;
    } while (car == 's' && totalPet <= 10);
    if (totalPet == 10)
    {
        puts("maximo de pets cadastrados");
    }
    system("cls");
    menu(veetor);
}

void banhoTosa(struct myDados veetor[10])
{
    // system("cls");
    // nomePetShop();

    // char car;
    // int i = 0;
    // do
    // {
    //     system("cls");
    //     for (int j = 0; (sizeof(arrValores[4][0]) / sizeof(arrValores[4][0])) > j; j++)
    //     {
    //         if (arrValores[4][0][j] >= 0 || arrValores[4][0][j] < 0)
    //         {
    //             printf("\n cu \n");
    //             puts(arrValores[4][0][j]);
    //         }
    //         // else {

    //         //     puts(arrValores[4][0][j]);
    //         // }
    //     }
    //     // system("cls");
    //     printf("\nDigite o nome do seu pet [max 10]\n");
    //     fgets(arrValores[3][0][i], 15, stdin);
    //     fflush(stdin);
    //     puts("continuar? \n[s] para sim\n[n] para nao\n");
    //     scanf("%c", &car);
    //     getchar();
    //     i++;
    // } while (car == 's' && i <= 10);
    // if (i == 10)
    // {
    //     puts("maximo de pets cadastrados");
    // }
    // system("cls");
    // // inicio(arrValores, 1); ------------------
}