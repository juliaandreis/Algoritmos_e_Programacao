#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,aleatorio;
    char parOuImpar[5];
    char par = par;
    printf("Você aposta PAR ou ÍMPAR?\n");
    scanf("%s",&parOuImpar);
 
    if (strcmp(parOuImpar,par) == 0)
    {
        printf("Você ganhou!");
    }

    return 0;
}