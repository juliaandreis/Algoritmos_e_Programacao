/*O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer
que você calcule quanto cada cliente gastou na loja apenas informando o número de
camisetas, calças e cintos comprados. As camisetas custam R$ 25,00, as calças cem reais e os
cintos 40 reais. Some o valor da compra e ao final dê um desconto de 10 por cento sobre o
total. Exiba na tela o valor do desconto e o valor da compra.*/

#include <stdio.h>

int main()
{
    int camisetas, calcas, cintos;
    float total, desconto;
    printf("Digite o número de camisetas compradas: ");
    scanf("%d", &camisetas);
    printf("Digite o número de calças compradas: ");
    scanf("%d", &calcas);
    printf("Digite o número de cintos comprados: ");
    scanf("%d", &cintos);
    desconto = (camisetas * 25 + (calcas + cintos) * 40) * 0.1;
    total = (camisetas * 25 + (calcas + cintos) * 40) * 0.9;
    printf("O valor do desconto foi de %.2f e o total da compra é %.2f reais.", desconto, total);

    return 0;
}