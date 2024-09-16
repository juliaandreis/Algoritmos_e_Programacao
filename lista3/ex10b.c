/*Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que
simule dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no
começo do programa quantas faces quer, para depois fazer o sorteio.

COM ESTRUTURA SWITCH CASE!!! */

#include <stdio.h>
#include <stdlib.h> // biblioteca da funcao rand()
#include <time.h>

int main()
{
    srand (time(0)); // semente para geração de números aleatórios
    int opcao,sorteio;
    printf("Escolha o dado:\n");
    printf("1 - D4\n");
    printf("2 - D6\n");
    printf("3 - D8\n");
    printf("4 - D10\n");
    printf("5 - D12\n");
    printf("6 - D16\n");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1:
            sorteio = 1 + rand() % 4;
            break;
        case 2:
            sorteio = 1 + rand() % 6;
            break;
        case 3:
            sorteio = 1 + rand() % 8;
            break;
        case 4:
            sorteio = 1 + rand() % 10;
            break;
        case 5:
            sorteio = 1 + rand() % 12;
            break;
        case 6:
            sorteio = 1 + rand() % 16;
    }

    if (sorteio > 0)
    {
        printf("O número sorteado é %d.",sorteio);
    }
    else
    {
        printf("Opcão inválida.");
    }

    return 0;
}