/*1. Implementando o próprio “shuffle” em arrays: faça um algoritmo que receba um array e embaralhe os seus
elementos da seguinte maneira: por n vezes (n é o tamanho do array) ele deve sortear dois índices, i e j, e trocá-los
de lugar. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle (char array[], int n)
{
    for (int k = 0; k < n; k++)
    {
        int i = rand() % n;
        int j = rand() % n;

        char temp = array [i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main()
{
    srand(time(0));
    char array[] = {'a', 'b', 'c', 'd', 'e'};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Array inicial: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c ", array[i]);
    }

    shuffle(array, n);

    printf("\n\nArray final: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c ", array[i]);
    }

    return 0;
}