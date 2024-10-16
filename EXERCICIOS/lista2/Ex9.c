/* Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras
feitas pelos clientes. Faça um programa que leia o valor da compra e escreva o valor da
compra com o desconto. */

#include <stdio.h>

int main()
{
    float valor, valorFinal;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    valorFinal = valor * 0.85;
    printf("O valor com desconto é %.2f reais.", valorFinal);

    return 0;
}
