/*Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o
peso do prato do cliente e calcule o valor a ser pago.
*/

#include <stdio.h>

int main()
{
    float peso,valor;
    printf("Digite o peso do prato em Kg: ");
    scanf("%f",&peso);
    valor = peso * 40;
    printf("O valor a ser pago é R$%f.",valor);

    return 0;
}
