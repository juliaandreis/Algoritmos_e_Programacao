
/*Faça um algoritmo que leia uma quantidade de tempo em minutos e escreva o tempo
equivalente em segundos na tela.
*/

#include <stdio.h>

int main()
{
    int minutos, segundos;

    printf("Digite um valor em minutos: ");
    scanf("%d",&minutos);
    segundos = minutos * 60;
    printf("%d minutos corresponde a %d segundos.", minutos,segundos);

    return 0;
}
