#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void opcao1()
{
    printf("Você escolheu a opção 1 - Consultar Ingredientes Disponíveis.\n");
    printf()
}

void opcao2()
{
    printf("Você escolheu a opção 2 - Preparar Poção.\n");
}

void opcao3()
{
    printf("Você escolheu a 3 - Reabastecer Ingrediente.\n");
}

void opcao4()
{
    printf("Saindo do programa.\n");
}

char menuPrincipal()
{
    char opcao;

    do {
        printf("\nMenu Principal:\n");
        printf("1 - Consultar Ingredientes Disponíveis\n");
        printf("2 - Preparar Poção\n");
        printf("3 - Reabastecer Ingrediente\n");
        printf("4 - Sair do Programa\n");
        printf("Escolha uma opção (1-4): ");
        
        scanf(" %c", &opcao);

        if (opcao < '1' || opcao > '4') {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao < '1' || opcao > '4');

    return opcao;
}

int main()
{
    char escolha;
    struct Ingredientes {
        char nome[30];  
        int quantidade;
    };
    struct Pocao {
        char nome[30];
        int indice[7], ingredientes[7];
    };

    do
    {
        escolha = menuPrincipal();

        switch (escolha) 
        {
            case '1':
                opcao1();
                break;
            case '2':
                opcao2();
                break;
            case '3':
                opcao3(); 
                break;
            case '4':
                opcao4();
                break;
        }
    } while (escolha != '4');

    return 0;
}