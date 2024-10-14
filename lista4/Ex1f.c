/*Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números
ímpares lidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand (time(0));
    int cont = 1, pares = 0, impares = 0, n;
    while (cont <= 10)
    {
        n = 0 + rand() % 100;
        printf("%d) %d\n", cont, n); 
        if (n % 2 == 0)
        {
            pares = pares + 1;
        }
        else
        {
            impares = impares + 1;
        }
        cont ++;
    }
    printf("\n");
    printf("Foram digitados %d números pares e %d números ímpares.", pares,impares);

    return 0;
}