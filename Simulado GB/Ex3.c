/*Implemente um programa que, dado um array de 20 inteiros preenchidos com valores entre 0 e 4, faça a
contagem de quantos valores de cada um dos números possíveis este vetor contem.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numero (int vetor[])
{
    int num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    for (int i = 0; i < 20; i++)
    {
        if (vetor[i] == 0)
        {
            num0++;
        }
        else if (vetor[i] == 1)
        {
            num1++;
        }
        else if (vetor[i] == 2)
        {
            num2++;
        }
        else if (vetor[i] == 3)
        {
            num3++;
        }
        else if (vetor[i] == 4)
        {
            num4++;
        }
    }
    printf("Quantidade de valores 0 = %d\n", num0);
    printf("Quantidade de valores 1 = %d\n", num1);
    printf("Quantidade de valores 2 = %d\n", num2);
    printf("Quantidade de valores 3 = %d\n", num3);
    printf("Quantidade de valores 4 = %d\n", num4);
}

int main()
{
    srand(time(0));
    int array[20];
    for(int i = 0; i < 20; i++)
    {
        array[i] = rand() % 5;
        printf("%d ", array[i]);
    }
    printf("\n");
    numero(array);

    return 0;
}