/*Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa
deve, dado um salário, retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto
segue a regra: o desconto deve ser de 11% do valor do salário. Entretanto, o valor máximo de desconto é
318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20.*/

#include <stdio.h>

int main ()
{
    float salario, desconto;

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    if ((salario * 0.11) < 318.2)
    {
        desconto = salario * 0.11;
        printf("O desconto previdenciário é de R$%.2f.",desconto);
    }
    else
    {
        printf("O desconto previdenciário é de R$318,20");
    }

    return 0;
}