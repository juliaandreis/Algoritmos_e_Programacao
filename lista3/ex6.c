/*Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão). Sorteie
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
que o programa venceu.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,aleatorio;
    char parOuImpar[5];

    printf("Você aposta PAR ou ÍMPAR?\n");
    scanf("%s",&parOuImpar);
    printf("Digite um número de 1 a 5: ");
    scanf("%d",&a);

    srand((unsigned)time(NULL));
    aleatorio = 1 + (rand() % 5);

    printf("Eu jogo %d\n",aleatorio);
    b = a + aleatorio;
    
    if (((a + aleatorio)%2) == 0 && strcmp(parOuImpar, 'par') == 0)
    {
        printf("%d + %d é par. Você ganhou!", aleatorio,a);
    }

    return 0;
}