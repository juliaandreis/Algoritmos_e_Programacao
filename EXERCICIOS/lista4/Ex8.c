/*Fazer um programa que calcule e imprima o fatorial de um número fornecido pelo usuário. Repetir a
execução do programa tantas até o usuário responder não. O fatorial de um número inteiro positivo é
definido como o número multiplicado por ele menos 1, menos 2, etc até o valor 1.*/

#include <stdio.h>

int main()
{
    int n,i, fatorial;
    char opcao;
    
    do
    {
        do
        {
            printf("Digite um número inteiro positivo: ");
            scanf("%d", &n);
            if (n < 0)
            {
                printf("Número inválido. Tente novamente.\n");
            }
        } while (n < 0);
        
        i = n;
        fatorial = 1;
        
        while (n > 1)
        {
            fatorial = fatorial * n;
            n = n - 1;
        }
        printf("O fatorial de %d é %d.\n", i,fatorial);
        do
        {
            printf("Deseja testar outro número? (s/n): ");
            getchar();
            scanf("%c", &opcao);
            printf("\n");
        
        } while (opcao != 's' && opcao != 'n');
        
    } while (opcao != 'n');
    
    return 0;
}