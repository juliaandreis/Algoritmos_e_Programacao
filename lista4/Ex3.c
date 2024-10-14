/*Elabore um programa que lê um número de 1 a 9 e mostra a tabuada de multiplicação do número. 
*/

#include <stdio.h>

int main()
{
    int n, x;
    char opcao;

    do
    {
        printf("Digite um número: ");
        scanf("%d", &n);
        for(int cont = 1; cont <= 10; cont++)
        {
            x = n * cont;
            printf("%d x %d = %d\n", n,cont,x);
        }
        do
        {
            printf("\n");
            printf("Deseja calcular outro número? (s/n): ");
            getchar();
            scanf("%c", &opcao);
        }while(opcao != 's' && opcao != 'n');
    }while(opcao != 'n');

    return 0;
}