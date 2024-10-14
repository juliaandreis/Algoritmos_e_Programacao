/*Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente.*/

#include <stdio.h>

int main ()
{
    int cont = 95;
    while (cont >= 25)
    {
        if (cont % 2 != 0)
        {
            printf("%d\n", cont);
        }
        cont --;
    }

    return 0;
}