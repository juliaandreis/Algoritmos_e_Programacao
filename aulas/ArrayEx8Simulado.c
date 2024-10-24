/*Você está desenvolvendo um programa para monitoramento de uma área de floresta. A cada
dia, são feitos registros da quantidade de chuva (em mm). Escreva um programa que leia os
registros diários de chuva para uma semana e informe:
a. O total de chuva acumulada.
b. O dia com maior quantidade de chuva.
c. Se em algum dia a chuva foi menor que 5 mm, exiba uma mensagem de alerta sobre
possível seca.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int dia[7];

    for (int i = 0; i < 7; i++)
    {
        dia[i] = rand() % 11;
        printf("%d ",dia[i]);
    }
    printf("\n");
    // Supondo que o programa faz outras coisas blablabla...
    int total = 0;
    int maior = -1;
    int maiorIndice = -1;

    for (int i = 0; i < 7; i++)
    {
        total = total + dia[i];
        if (dia[i] > maior)
        {
            maior = dia[i];
            maiorIndice = i;
        }
        if (dia[i] < 5)
        {
            printf("Dia %d teve seca!\n", i+1);
        }
    }
    printf("Total de chuva acumulada: %d\n", total);
    printf("Maior volume de chuva: %d\n", maior);
    printf("Dia do maior valor: %d\n", maiorIndice+1);

    return 0;
}