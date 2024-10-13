/*Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for
diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.
*/

#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Digite o enumerador: ");
    scanf("%f", &a);
    printf("Digite o divisor: ");
    scanf("%f", &b);

    if (b != 0)
    {
        c = a / b;
        printf("O resultado da divisão é %.2f", c);
    }
    else
    {
        printf("Não é possível dividir por zero.");
    }

    return 0;
}
