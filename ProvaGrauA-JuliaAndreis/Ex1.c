/*Escreva um programa que sorteie números inteiros e decimais, respondendo a cada um dos
subitens abaixo:
a) Sorteie um número entre -50 e 50.
b) Sorteie um número par entre 20 e 100.
c) Sorteie um número decimal entre 0 e 1 com duas casas decimais.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a,b;
    float c;

    printf("a) Sorteia um número entre -50 e 50.\n");
    a = (rand() % 51) - 50;
    printf("Número sorteado: %d\n", a);
    printf("\n");

    printf("b) Sorteie um número par entre 20 e 100.\n");
    b = (10 + rand() % 41) * 2;
    printf("Número sorteado: %d\n", b);
    printf("\n");

    printf("c) Sorteie um número decimal entre 0 e 1 com duas casas decimais.\n");
    c = (float)(rand() % 101) / 100;
    printf("Número sorteado: %.2f\n", c);
    printf("\n");

    return 0;
}