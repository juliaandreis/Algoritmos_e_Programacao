/*Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação
de cada moeda em relação ao real. Depois apresente o seguinte menu:
1) Converter de Real para Euro
2) Converter de Real para Dólar
3) Converter de Euro para Dólar
4) Converter de Euro para Real
5) Converter de Dólar para Euro
6) Converter de Dólar para Real
Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda
destino.*/

#include <stdio.h>

int main()
{
    float coteuro,cotdolar,valor;
    char moeda1, moeda2;
    printf("Digite a cotação do euro: ");
    scanf("%f", &coteuro);
    printf("Digite a cotação do dolar: ");
    scanf("%f", &cotdolar);
    printf("Sendo a) Euro, b) Dolar, c) Real\n");
    printf("Digite a moeda de origem: ");
    scanf("%c", &moeda1);
    printf("Digite a moeda de destino: ");
    scanf("%c", &moeda2);
    printf("");

    if (moeda1 == 'a' && moeda2 == 'b')
    {
        valor = moeda1 * coteuro / cotdolar
    }
    

    return 0;
}