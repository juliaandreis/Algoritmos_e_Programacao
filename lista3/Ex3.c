/*Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo
o resultado.*/

#include <stdio.h>

int main()
{
    int a, a2, a3;
    printf("Digite um número (positivo ou negativo): ");
    scanf("%d", &a);

    if (a >= 0)
    {
        a2 = a * 2;
        printf("O dobro de %d é %d.", a, a2);
    }
    else
    {
        a3 = a * 3;
        printf("O triplo de %d é %d.", a, a3);  
    }

    return 0;
}
