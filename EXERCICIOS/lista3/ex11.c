/*11) Crie um programa para informar quais e quantas notas são necessárias para entregar o mínimo de
cédulas para um determinado valor informado pelo usuário considerando notas de R$ 100, R$ 50,
R$ 20, R$ 10 e R$ 5 e R$ 1. Seu programa deve mostrar apenas as notas utilizadas. Por exemplo, ao
solicitar R$18, o programa deve informar apenas a seguinte informação (note que não foram
exibidas informações sobre as demais cédulas):
1 nota(s) de R$ 10.
1 nota(s) de R$ 5.
3 nota(s) de R$ 1.*/

#include <stdio.h>

int main ()
{
    int valor,n1,n5,n10,n20,n50,n100;

    printf("Digite um valor em reais: R$");
    scanf("%d", &valor);

    if (valor / 100 >= 1)
    {
        n100 = valor / 100;
        printf ("%d nota(s) de R$ 100\n", n100);
        valor = valor - n100 * 100;
    }
    if (valor / 50 >= 1)
    {
        n50 = valor / 50;
        printf ("%d nota(s) de R$ 50\n", n50);
        valor = valor - n50 * 50;
    }
    if (valor / 20 >= 1)
    {
        n20 = valor / 20;
        printf ("%d nota(s) de R$ 20\n", n20);
        valor = valor - n20 * 20;
    }
    if (valor / 10 >= 1)
    {
        n10 = valor / 10;
        printf ("%d nota(s) de R$ 10\n", n10);
        valor = valor - n10 * 10;
    }
    if (valor / 5 >= 1)
    {
        n5 = valor / 5;
        printf ("%d nota(s) de R$ 5\n", n5);
        valor = valor - n5 * 5;
    }
    if (valor / 1 >= 1)
    {
        n1 = valor / 1;
        printf ("%d nota(s) de R$ 1", n1);
    }

    return 0;
}
