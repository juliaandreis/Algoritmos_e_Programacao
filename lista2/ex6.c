/*A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma
quantidade de tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$
1500,00. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos smartphones
e dos tablets. Escreva um programa que leia o número de smartphones e tablets vendidos em
um dia e calcule o total arrecadado.*/

#include <stdio.h>

int main()
{
    int smartphones, tablets;
    float total;

    printf("Digite a quantidade de smartphones vendida: ");
    scanf("%d",&smartphones);
    printf("Digite a quantidade de tablets vendida: ");
    scanf("%d",&tablets);
    total = smartphones * 1000 + tablets * 1500;
    printf("O valor total arrecadado foi de R$%.2f no dia de hoje.", total);

    return 0;
}