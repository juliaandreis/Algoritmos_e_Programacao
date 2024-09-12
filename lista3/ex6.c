/*Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
que o programa venceu*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char paridade[5];
    int a,n;
    printf("Você aposta par ou ímpar? ");
    scanf("%s",&paridade);
    printf("Digite um número: ");
    scanf("%d",&a);

    n = 1 + rand() % (5)

    return 0;
}