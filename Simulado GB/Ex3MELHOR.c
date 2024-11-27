/*Implemente um programa que, dado um array de 20 inteiros preenchidos com valores entre 0 e 4, faça a
contagem de quantos valores de cada um dos números possíveis este vetor contem.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int array[20];
    int contagem[5] = {0,0,0,0,0};

    for(int i = 0; i < 20; i++)
    {
        array[i] = rand() % 5;
        printf("%d ", array[i]);
        contagem[array[i]]++;
    }
    printf("\n");
    
    for(int i = 0; i < 5; i++)
    {
        printf("Quantidade de valores %d = %d\n", i, contagem[i]);
    }
    return 0;
}