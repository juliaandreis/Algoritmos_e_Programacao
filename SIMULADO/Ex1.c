/*1. Faça um programa que leia números inteiros até que o usuário digite 0. No final, imprima a
porcentagem de números positivos, negativos, divisíveis por 2, e divisíveis por 5.*/

#include <stdio.h>

int main ()
{
    int total = 0, positivo = 0,negativo = 0,par = 0,cinco = 0, n = 0;
    float Ppositivo,Pnegativo,Ppar,Pcinco;

    printf("Digite um ou mais números:\n");
    do 
    {
        scanf("%d", &n);
        total = total + 1;
        if (n >= 0)
        {
            positivo = positivo + 1;
        }
        else if (n > 0)
        {
            negativo = negativo + 1;
        }

        if (n % 2 == 0)
        {
        par = par + 1; 
        }

        if (n % 5 == 0)
        {
            cinco = cinco + 1;
        }
    } while (n != 0);

    Ppositivo = (float)positivo / total * 100;
    Pnegativo = (float)negativo / total * 100;
    Ppar = (float)par / total * 100;
    Pcinco = (float)cinco / total * 100;

    printf("Percentual de números:\n");
    printf("- positivos: %.2f\n", Ppositivo);
    printf("- negativos: %.2f\n", Pnegativo);
    printf("- divisíveis por 2: %.2f\n", Ppar);
    printf("- divisíveis por 5: %.2f\n", Pcinco);

    return 0;
}