/*Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo.
A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, x, cont = 1;
    srand(time(0));

    n = 1 + rand() % 10;

    printf("Adivinhe o número. Você tem três tentativas.\n");
    while (cont <= 3 && n != x)
    {
        printf("%d° tentativa: ", cont);
        scanf("%d", &x);
        if (x == n)
        {
            printf("Parabéns, você acertou!");
        }
        else if (x < n)
        {
            printf("Você errou. O número que estou pensando é MAIOR.\n");
        }
        else
        {
            printf("Você errou. O número que estou pensando é MENOR.\n");
        }
        cont++;
    }

    return 0;
}