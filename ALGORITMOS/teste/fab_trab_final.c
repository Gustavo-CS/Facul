
#include <stdio.h>
#include <stdlib.h>
// criar um map chave valor




int main(char arrValores[7][10][10][16], int boll)
{
    system("cls");
    puts("\n MAIN \n");
    // int boll = 0;

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

    cadOrLogin(arrValores, boll);
    return 0;
}

void cadOrLogin(char arrValores[7][10][10][16], int boll)
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
        cadastro();
        break;
    case 2:
        system("cls");
        login(arrValores, boll);
        // teste(arrValores);
        break;
    case 3:
        system("cls");
        puts("Volte sempre ao Super PetShop Gustavo BCC");
        break;
    default:
        system("cls");
        puts("Comando nao reconhecido \n");
        cadOrLogin(arrValores, boll);
        break;
    }
}

// void teste(char arrValores[7][10][10][16])
// {
//     printf("%s \n", arrValores[0][0][0]);
//     printf("%s \n", arrValores[1][0][0]);
// }

void cadastro()
{
    // char usuarioCadastro[16];
    // char senhaCadastro[16];
    system("cls");
    char arrValores[7][10][10][16];
    int i = 0;
    int boll = 1;
    puts("digite seu usuario: ");
    fgets(arrValores[0][i][0], 15, stdin);
    // while ((ch = getchar()) != '\n' && ch != EOF);
    puts("digite sua senha: ");
    fgets(arrValores[1][i][0], 15, stdin);
    fflush(stdin);
    // while ((ch = getchar()) != '\n' && ch != EOF);
    // if(senha == ){
    //     Cadastro();
    // }
    arrValores[0][i][0][strcspn(arrValores[0][i][0], "\n")] = '\0';
    arrValores[1][i][0][strcspn(arrValores[1][i][0], "\n")] = '\0';
    // arrValores[0][i][0] = usuarioCadastro;
    // for

    system("cls");
    main(arrValores, boll);
}

void login(char arrValores[7][10][10][16], int boll)
{
    system("cls");
    int i = 0;
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
        puts("foi \n");
        usuarioLogin[strcspn(usuarioLogin, "\n")] = '\0';
        senhaLogin[strcspn(senhaLogin, "\n")] = '\0';
        puts("foi 2 \n");
        int usuarioVerificado = strcmp(arrValores[0][0][0], usuarioLogin);
        puts("foi 3\n");
        int senhaVerificada = strcmp(arrValores[1][i][0], senhaLogin);
        if (senhaVerificada == 0 && usuarioVerificado == 0)
        {
            menu(arrValores, 0);
            // main();
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
                login(arrValores, boll);
                break;
            case 2:
                system("cls");
                main(arrValores, boll);
                break;
            default:
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
            login(arrValores, boll);
            break;
        case 2:
            system("cls");
            main(arrValores, boll);
            break;
        default:
            break;
        }
    }
}

void nomePetShop()
{
    puts("Super PetShop Gustavo BCC");
}

menu(char arrValores[7][10][10][16], int totalPet)
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
        cadastrarCliente(arrValores);
        break;
    case 2:
        system("cls");
        banhoTosa(arrValores);
        break;
    // case 3:
    //     system("cls");
    //     main(usuario, senha);
    //     break;
    // case 4:
    //     system("cls");
    //     main(usuario, senha);
    //     break;
    case 5:
        system("cls");
        // puts("Volte sempre ao Super PetShop Gustavo BCC");
        main(arrValores, 1);
        break;
    default:
        system("cls");
        puts("Opcao incorreta \n");
        menu(arrValores, totalPet);
        break;
    }
}

void cadastrarCliente(char arrValores[7][10][10][16])
{
    system("cls");
    nomePetShop();
    printf("\nCadastro de cliente\n");
    printf("\nDigite seu nome: \n");
    fgets(arrValores[2][0][0], 15, stdin);
    fflush(stdin);
    printf("\nDigite seu telefone: (so os numeros)\n");
    fgets(arrValores[3][0][0], 15, stdin);
    fflush(stdin);
    char car;
    // int i = 0;
    int totalPet = 0;
    do
    {
        system("cls");
        printf("\nDigite o nome do seu pet [max 10]\n");
        fgets(arrValores[4][0][totalPet], 15, stdin);
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
    menu(arrValores, totalPet);
}

void banhoTosa(char arrValores[7][10][10][16])
{
    system("cls");
    nomePetShop();

    char car;
    int i = 0;
    do
    {
        system("cls");
        for (int j = 0; (sizeof(arrValores[4][0]) / sizeof(arrValores[4][0]) ) > j; j++)
        {
            if(arrValores[4][0][j] >=0 || arrValores[4][0][j] <0){
                printf("\n cu \n");
                puts(arrValores[4][0][j]);

            } 
            // else {

            //     puts(arrValores[4][0][j]);
            // }
        }
        // system("cls");
        printf("\nDigite o nome do seu pet [max 10]\n");
        fgets(arrValores[3][0][i], 15, stdin);
        fflush(stdin);
        puts("continuar? \n[s] para sim\n[n] para nao\n");
        scanf("%c", &car);
        getchar();
        i++;
    } while (car == 's' && i <= 10);
    if (i == 10)
    {
        puts("maximo de pets cadastrados");
    }
    system("cls");
    main(arrValores, 1);
}