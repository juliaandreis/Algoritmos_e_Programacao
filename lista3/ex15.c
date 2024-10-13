/*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço
normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir
para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
1 - À vista em dinheiro, recebe 15% de desconto
2 - À vista no cartão de crédito, recebe 10% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em três vezes, preço normal de etiqueta mais juros de 10%*/

#include <stdio.h>

int main()
{
    int opcao;
    float preco,total;

    printf("Digite o preço do produto: R$");
    scanf("%f", &preco);
    printf("Sendo\n");
    printf("1 - À vista em dinheiro\n");
    printf("2 - À vista no cartão de crédito\n");
    printf("3 - Em duas vezes\n");
    printf("4 - Em três vezes\n");
    printf("Digite a forma de pagamento: ");
    scanf("%d", &opcao);
    printf("\n");
    if (opcao == 1)
    {
        total = preco * 0.85;
    }
    else if (opcao == 2)
    {
        total = preco * 0.9;
    }
    else if (opcao == 3)
    {
        total = preco;
    }
    else
    {
        total = preco * 1.1;
    }

    printf("O valor a ser pago é R$%.2f", total);

    return 0;
}