/*. Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para
ler o preço do litro da gasolina e o valor que o motorista tem disponível para abastecer.
Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela.
*/

#include <stdio.h>

int main()
{
    float preco, valorDisponivel,totalLitros;
    printf("Digite o preço do litro da gasolina: ");
    scanf("%f",&preco);
    printf("Digite o valor disponível em reais: ");
    scanf("%f",&valorDisponivel);
    totalLitros = valorDisponivel / preco;
    printf("Você pode abastecer %.2f litros de gasolina.", totalLitros);

    return 0;
}