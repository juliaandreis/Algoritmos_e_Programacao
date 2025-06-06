/*Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem
“POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de
números positivos e negativos lidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(0));
    int n, cont = 1, positivo = 0, negativo = 0, nulo = 0;
    
    while (cont <= 20)
    {
        n = (rand() % 20) - 10;
        printf("%d) %d\n", cont, n); 
        if (n < 0)
        {
            negativo = negativo + 1;
        }
        else if (n > 0)
        {
            positivo = positivo + 1;
        }
        else
        {
            nulo = nulo + 1;
        }
        cont ++;
    }
    printf("\n");
    printf("%d números positivos\n", positivo);
    printf("%d números negativos\n", negativo);
    printf("%d números nulos\n", nulo);


    return 0;
}
