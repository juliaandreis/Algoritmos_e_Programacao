/*Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A
+ C.*/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Digite, respectivamente, os valores de A, B e C: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a + b) > (a + c))
    {
        printf("A soma de %d e %d é maior que a soma de %d e %d.", a,b,a,c);
    }
    else if ((a + b) == (a + c))
    {
        printf("A soma de %d e %d e igual a soma de %d e %d.", a,b,a,c);
    }
    else
    {
        printf("A soma de %d e %d não é maior que a soma de %d e %d.", a,b,a,c);
    }

    return 0;
}
