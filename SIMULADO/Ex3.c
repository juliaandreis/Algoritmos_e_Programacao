/*Imagine que você está administrando uma fazenda de abelhas. A cada mês, a colmeia inicial
dobra de tamanho, mas 3% das abelhas migram para outras colmeias devido às mudanças
sazonais. Escreva um programa que leia o número de meses e a população inicial da colmeia,
e exiba a população ao final de cada mês, considerando a migração*/

#include <stdio.h>

int main()
{
    int inicial, final, meses, n = 1;

    printf("Digite a população inicial de abelhas: ");
    scanf("%d", &inicial);
    printf("Digiter a quantidade de meses a analisar: ");
    scanf("%d", &meses);

    do
    {
        final = inicial * 2 * 0.97;
        printf("%d° mês: %d abelhas.\n", n,final);
        inicial = final;
        n++;

    } while (n <= meses);
    


    return 0;
}