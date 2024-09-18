/*Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3.*/

#include <stdio.h>

int main()
{
    int a;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    if ((a % 3) == 0)
    {
        printf("%d é divisível por 3.",a);
    }
    else
    {
        printf("%d não é divisível por 3.",a);
    }

    return 0;
}