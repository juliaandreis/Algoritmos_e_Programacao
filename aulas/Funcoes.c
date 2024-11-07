#include <stdio.h>

void cumprimentar()
{
    //Como é void não em retorno;
    printf("Ola!\n");
}
int main()
{
    //Chamando a função cumprimentar
    cumprimentar;

    return 0;
}

void cumprimentarPessoa (char* nome)