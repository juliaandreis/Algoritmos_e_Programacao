/*Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão). Sorteie
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
que o programa venceu.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    char paridade;
    int a,n,resultado;
    
    printf("Você aposta par ou ímpar? Digite 'p' para par e 'i' para ímpar: ");
    scanf("%s",&paridade);
    printf("Digite um número: ");
    printf("Digite um número de 0 a 5: ");
    scanf("%d",&a);

    n = 1 + rand() % (5);
    if ((n < 6) && (paridade == 'p' || 'i'))
    {
        n = 0 + rand() % (6);

        resultado = n + a;

        printf("Número do oponente = %d.\n", n);
        printf("Resultado = %d.\n", resultado);

        if (((resultado) % 2 == 0) && paridade == 'p')
        {
            printf("Você ganhou!");
        }
        else if ((((resultado) % 2 != 0) && paridade == 'i'))
        {
            printf("Você ganhou!");
        }
        else if (((resultado) % 2 == 0) && paridade == 'i')
        {
            printf("Você perdeu!");
        }
        else
        {
            printf("Você perdeu!");
        }
    }
    else
    {
        printf("Você não digitou os dados corretamente. Tente novamente.");
    }

    return 0;
}
