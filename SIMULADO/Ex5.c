/*Escreva um programa que sorteie um número entre 1 e 100. O usuário deve tentar adivinhar o
número sorteado, e o programa deve informar se o palpite está muito alto, muito baixo ou
correto. O programa termina quando o usuário acerta o número.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a;
    int n = 1 + rand() % 100;
    
    printf("Qual número foi sorteado?\n");
    while (n != a)
    {
        printf("Digite seu palpite: ");
        scanf("%d", &a);
        if (a < n)
        {
            printf("Seu palpite está mais baixo.\n");
        }
        else if (a > n)
        {
            printf("Seu palpite está mais alto.\n");
        }
        else
        {
            printf("Seu palpite está correto!");
        }
        printf("\n");
    }

    return 0;
}