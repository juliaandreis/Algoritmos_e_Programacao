/*Gerar e escrever os números inteiros do intervalo [25,70] em ordem decrescente*/

#include <stdio.h>

int main ()
{
    int cont = 70;
    while (cont >= 25)
    {
        printf("%d\n", cont);
        cont --;
    }

    return 0;
}