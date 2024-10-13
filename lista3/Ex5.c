/*Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se
é ímpar.*/

#include <stdio.h>

int main()
{
    int a;
    printf("Digite um número: ");
    scanf("%d",&a);

    if ((a % 2) == 0)
    {
        printf("%d é par.",a);
    }
    else
    {
        printf("%d é ímpar.",a);
    }
    
    return 0;
}
