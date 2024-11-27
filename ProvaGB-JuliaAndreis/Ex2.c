/* Implemente um programa que, dado uma matriz 5x5 preenchida com valores entre 0 e
4, faça a contagem de quantos valores de cada um dos números possíveis esta matriz contém*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int matriz[5][5];
    int contagem[5] = {0,0,0,0,0};

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 5;
            printf("%d ", matriz[i][j]);
            contagem[matriz[i][j]]++;
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i = 0; i < 5; i++)
    {
        printf("Quantidade de valores %d = %d\n", i, contagem[i]);
    }
    return 0;
}