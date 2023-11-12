
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
    char banhoETosa[10][3];
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
    // int boll = 0;
    int numUsuarios = 0;
    // printf("%s \n", veetor[0].numPet);
    inicio(veetor, numUsuarios);
    return 0;
}

void inicio(struct myDados veetor[10], int numUsuarios)
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

    cadOrLogin(veetor, numUsuarios);
}

void cadOrLogin(struct myDados veetor[10], int numUsuarios)
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
        cadastro(veetor, numUsuarios);
        break;
    case 2:
        system("cls");
        login(veetor, numUsuarios);
        // teste(arrValores);
        break;
    case 3:
        system("cls");
        puts("Volte sempre ao Super PetShop Gustavo BCC");
        break;
    default:
        system("cls");
        puts("Comando nao reconhecido \n");
        cadOrLogin(veetor, numUsuarios);
        break;
    }
}

// void teste(char arrValores[7][10][10][16])
// {
//     printf("%s \n", arrValores[0][0][0]);
//     printf("%s \n", arrValores[1][0][0]);
// }

void cadastro(struct myDados veetor[10], int numUsuarios)
{
    // char usuarioCadastro[16];
    // char senhaCadastro[16];

    system("cls");
    int i = 0;
    puts("digite seu usuario: ");
    fgets(veetor[numUsuarios].usuario, 15, stdin);
    fflush(stdin);
    // while ((ch = getchar()) != '\n' && ch != EOF);
    puts("digite sua senha: ");
    fgets(veetor[numUsuarios].senha, 15, stdin);
    fflush(stdin);
    // while ((ch = getchar()) != '\n' && ch != EOF);
    // if(senha == ){
    //     Cadastro();
    // }
    veetor[numUsuarios].usuario[strcspn(veetor[numUsuarios].usuario, "\n")] = '\0';
    veetor[numUsuarios].senha[strcspn(veetor[numUsuarios].senha, "\n")] = '\0';
    // arrValores[0][i][0] = usuarioCadastro;
    numUsuarios++;
    system("cls");
    inicio(veetor, numUsuarios);
}

void login(struct myDados veetor[10], int numUsuarios)
{
    system("cls");
    int usuarioConectado;
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
    if (numUsuarios > 0)
    {
        int usuarioVerificado;
        int senhaVerificada;
        usuarioLogin[strcspn(usuarioLogin, "\n")] = '\0';
        senhaLogin[strcspn(senhaLogin, "\n")] = '\0';
        for (int j = 0; j < 10; j++)
        {
            usuarioVerificado = strcmp(veetor[j].usuario, usuarioLogin);
            senhaVerificada = strcmp(veetor[j].senha, senhaLogin);
            if (senhaVerificada == 0 && usuarioVerificado == 0)
            {
                usuarioConectado = j;
                break;
            }
        }

        if (senhaVerificada == 0 && usuarioVerificado == 0)
        {
            menu(veetor, usuarioConectado);
            // inicio();
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
                login(veetor, numUsuarios);
                break;
            case 2:
                system("cls");
                inicio(veetor, numUsuarios);
                break;
            default:
                puts("erro");
                login(veetor, numUsuarios);
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
            login(veetor, numUsuarios);
            break;
        case 2:
            system("cls");
            inicio(veetor, numUsuarios);
            break;
        default:
            puts("erro");
            login(veetor, numUsuarios);
            break;
        }
    }
}

void nomePetShop()
{
    puts("Super PetShop Gustavo BCC");
}

menu(struct myDados veetor[10], int usuarioConectado)
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
        cadastrarCliente(veetor, usuarioConectado);
        break;
    case 2:
        system("cls");
        banhoTosa(veetor, usuarioConectado);
        break;
    // case 3:
    //     system("cls");
    //     inicio(usuario, senha);
    //     break;
    case 4:
        system("cls");
        relatorioGeral(veetor, usuarioConectado);
        break;
    case 5:
        system("cls");
        puts("Volte sempre ao Super PetShop Gustavo BCC");
        inicio(veetor, 1);
        break;
    default:
        system("cls");
        puts("Opcao incorreta \n");
        menu(veetor, usuarioConectado);
        break;
    }
}

void cadastrarCliente(struct myDados veetor[10], int usuarioConectado)
{
    system("cls");
    nomePetShop();
    printf("\nCadastro de cliente\n");
    printf("\nDigite seu nome: \n");
    fgets(veetor[usuarioConectado].nome, 15, stdin);
    fflush(stdin);
    printf("\nDigite seu telefone: (so os numeros)\n");
    fgets(veetor[usuarioConectado].telefone, 15, stdin);
    fflush(stdin);
    char car;
    // int i = 0;
    int totalPet = veetor[usuarioConectado].numPet;
    do
    {
        system("cls");
        printf("\nDigite o nome do seu pet [max 10]\n");
        fgets(veetor[usuarioConectado].nomePet[totalPet], 15, stdin);
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
    veetor[usuarioConectado].numPet = totalPet;
    system("cls");
    menu(veetor, usuarioConectado);
}

void banhoTosa(struct myDados veetor[10], int usuarioConectado)
{
    system("cls");
    nomePetShop();

    char car;
    int i = 0;
    int totalBanho = veetor[usuarioConectado].numBanho;

    do
    {
        system("cls");
        puts("Para agendar digite: \n");

        for (int j = 1; j <= veetor[usuarioConectado].numPet; j++)
        {
            printf("%d | para o(a) %s \n", j, veetor[usuarioConectado].nomePet[j]);
            // if (arrValores[4][0][j] >= 0 || arrValores[4][0][j] < 0)
            // {
            //     printf("\n cu \n");
            //     puts(arrValores[4][0][j]);
            // }
            // else {

            //     puts(arrValores[4][0][j]);
            // }
        }
        int valuePet;
        scanf("%d", &valuePet);
        getchar();
        system("cls");

        puts("digite :");
        puts("1 | Para agendar apenas banho");
        puts("2 | Para agendar apenas tosa");
        puts("3 | Para agendar banho e tosa");
        int valueOp;
        scanf("%d", &valueOp);
        getchar();
        system("cls");
        // fgets(veetor[usuarioConectado].banhoETosa[i], 15, stdin);
        // fflush(stdin);

        switch (valueOp)
        {
        case 1:
            veetor[usuarioConectado].banhoETosa[i][0] = 1;            
            veetor[usuarioConectado].banhoETosa[i][1] = valuePet;
            break;
        case 2:
            veetor[usuarioConectado].banhoETosa[i][0] = 2;            
            veetor[usuarioConectado].banhoETosa[i][1] = valuePet;
            break;
        case 3:
            veetor[usuarioConectado].banhoETosa[i][0] = 3;            
            veetor[usuarioConectado].banhoETosa[i][1] = valuePet;
            break;
        default:
            puts("Erro");
            banhoTosa(veetor, usuarioConectado);
            break;
        }

        system("cls");

        puts("quer fazer outro agendamento? \n[s] para sim\n[n] para nao\n");
        scanf("%c", &car);
        getchar();
        i++;
    } while (car == 's' && i <= 10);
    if (i == 10)
    {
        puts("maximo de agendamentos feitos");
    }

    veetor[usuarioConectado].numBanho = totalBanho;
    system("cls");
    menu(veetor, usuarioConectado);
}

void consulta(struct myDados veetor[10], int usuarioConectado)
{
    system("cls");
    nomePetShop();

    int totalConsut = veetor[usuarioConectado].numConsulta;
    char car;
    int i = 0;
    do
    {
        system("cls");
        puts("Para agendar digite: \n");

        for (int j = 1; j <= veetor[usuarioConectado].numPet; j++)
        {
            printf("%d | para o(a) %s \n", j, veetor[usuarioConectado].nomePet[j]);
            // if (arrValores[4][0][j] >= 0 || arrValores[4][0][j] < 0)
            // {
            //     printf("\n cu \n");
            //     puts(arrValores[4][0][j]);
            // }
            // else {

            //     puts(arrValores[4][0][j]);
            // }
        }
        int valuePet;
        scanf("%d", &valuePet);
        getchar();
        system("cls");

        puts("digite :");
        puts("1 | Para agendar uma consulta para a quarta");
        puts("2 | Para agendar uma consulta para o sabado");
        int valueOp;
        scanf("%d", &valueOp);
        getchar();
        system("cls");

        switch (valueOp)
        {
        case 1:
            veetor[usuarioConectado].banhoETosa[i][0] = 1;            
            veetor[usuarioConectado].banhoETosa[i][1] = valuePet;
            break;
        case 2:
            veetor[usuarioConectado].banhoETosa[i][0] = 2;            
            veetor[usuarioConectado].banhoETosa[i][1] = valuePet;
            break;
        default:
            puts("Erro");
            banhoTosa(veetor, usuarioConectado);
            break;
        }

        puts("digite :");
        puts("1 | Para consultar com o Dr. Gustavo");
        puts("2 | Para consultar com o Dr. Fabiano");
        int valueOp;
        scanf("%d", &valueOp);
        getchar();
        system("cls");

        switch (valueOp)
        {
        case 1:
            veetor[usuarioConectado].banhoETosa[i][2] = 1;        
            break;
        case 2:
            veetor[usuarioConectado].banhoETosa[i][2] = 2;          
            break;
        default:
            puts("Erro");
            banhoTosa(veetor, usuarioConectado);
            break;
        }

        system("cls");

        puts("quer fazer outro agendamento? \n[s] para sim\n[n] para nao\n");
        scanf("%c", &car);
        getchar();
        i++;
    } while (car == 's' && i <= 10);
    if (i == 10)
    {
        puts("maximo de agendamentos feitos");
    }

    veetor[usuarioConectado].numConsulta = totalConsut;
    system("cls");
    menu(veetor, usuarioConectado);
}

void relatorioGeral(struct myDados veetor[10], int usuarioConectado)
{
}