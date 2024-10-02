/*Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor
da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço
for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na
tela o valor de venda.*/

#include <stdio.h>

int main()
{
    float produto,venda;
    printf("Digite o valor do produto em reais: ");
    scanf("%f",&produto);
    
    if (produto < 20)
    {
        venda = produto * 1,45;
    }
    else if (produto > 50)
    {
        venda = produto * 1,25;
    }
    else
    {
        venda = produto * 1,35;
    }

    printf("O valor de venda do produto é R$%.2f",venda);

    return 0;
}