/*Escrever um programa que produza a saída abaixo na tela, para n linhas e usando um caractere lido do
teclado.*/

#include <stdio.h>

int main()
{
    int n,i = 1;
    char x;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &n);
    printf("Digite um caracter do teclado: ");
    getchar();
    scanf("%c", &x);

    printf("\n");

    while (i <= n)
    {
        for(int cont = 1; cont <= i; cont++)
        {
            
            printf("%c ", x);
        
        }
        i = i + 1;
        printf("\n");
    }
    

    return 0;
}