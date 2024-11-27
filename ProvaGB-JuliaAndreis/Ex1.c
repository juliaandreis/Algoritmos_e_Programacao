/* Implemente uma função sortear que receba o intervalo de valores inteiros início e
fim como parâmetro, sorteie e retorne um número dentro do intervalo (considerando intervalo
fechado [início, fim]).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear(int inicio, int fim)
{
    int numero = inicio + rand() % (fim - inicio + 1);
    return numero;
}

int main ()
{
    srand(time(0));
    int inicio, fim;

    printf("Digite o um intervalo de inteiros:\n");
    printf("Início = ");
    scanf("%d", &inicio);
    printf("Fim = ");
    scanf("%d", &fim);
    int numSorteado = sortear(inicio,fim);
    printf("\nO número sorteado foi %d.", numSorteado);

    return 0;
}