/*Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar
seus pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que
leia o número de pássaros que o criador possui e calcule a quantidade total de ração
necessária por dia.*/

#include <stdio.h>

int main ()
{
    int passaros, racao;
    printf("Digite a quantidade de pássaros: ");
    scanf("%d", &passaros);
    racao = passaros * 30;
    printf("São necessários %d gramas de ração por dia.", racao);

    return 0;
}