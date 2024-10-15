/*Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor, o maior e a média
dos valores sorteados.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,c,d,e, maior,menor,media;
    srand(time(0));

    a = 0 + rand() % 101;
    b = 0 + rand() % 101;
    c = 0 + rand() % 101;
    d = 0 + rand() % 101;
    e = 0 + rand() % 101;

    if(a > b && a > c && a > d && a > e)
    {
        
    }


    return 0;
}