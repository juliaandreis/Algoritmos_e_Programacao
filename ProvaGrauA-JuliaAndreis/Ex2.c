/*Escreva um programa que sorteie três números inteiros entre 1 e 10. O programa deve
continuar sorteando até que o primeiro número seja menor que o segundo, e o segundo seja
menor que o terceiro. Não use o comando break.
Regras:
a) A cada iteração, o programa deve exibir os números sorteados.
b) Quando a condição for atendida (primeiro < e segundo e segundo < terceiro), o
programa deve imprimir uma mensagem indicando que os números satisfazem a
condição.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a, b, c, i = 1;
    do
    {
        a = 1 + rand() % 10;
        b = 1 + rand() % 10;
        c = 1 + rand() % 10;

        printf("%d) Números sorteados: %d, %d, %d.\n", i,a,b,c);
        i++;

    } while (!(a < b && b < c));

    printf("%d < %d < %d. A condição foi atendida.", a,b,c);
    
    return 0;
}