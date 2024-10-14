/*Escrever um programa que calcule todos os números divisíveis por certo valor indicado pelo usuário (o
resto da divisão por este número deve ser igual a zero), compreendidos em um intervalo também
especificado pelo usuário. O usuário deve entrar com um primeiro valor correspondente ao divisor e
após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo.*/

#include <stdio.h>

int main()
{
    int n,x,i,f;
    char opcao;

    do
    {
        printf("Digite um número correspondente ao numerador: ");
        scanf("%d", &n);
        printf("Digite o número inicial do intervalo: ");
        scanf("%d", &i);
        printf("Digite o número final do intervalo: ");
        scanf("%d", &f);
        printf("Números divisíveis por %d no intervalo de %d a %d:\n", n,i,f);
        for(int cont = i; cont <= f; cont++)
        {
            x = cont / n;
            if (cont % n == 0)
            {
            printf("%d ",cont);
            }
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