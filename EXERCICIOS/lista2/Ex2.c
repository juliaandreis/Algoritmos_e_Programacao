/*Um turista deseja comprar dólares em uma casa de câmbio. Escreva um programa que leia a
cotação do dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o
valor total em reais que ele precisará pagar.
*/

#include <stdio.h>

int main()
{
    float cotacao, real, dolar;

    printf("Digite a cotação do dólar para real: ");
    scanf("%f",&cotacao);
    printf("Digite a quantidade de dólares que deseja comprar: ");
    scanf("%f",&dolar);
    real = dolar * cotacao;
    printf("Para comprar %f dólares, você precisará pagar %f reais.",dolar,real);

    return 0;
}
