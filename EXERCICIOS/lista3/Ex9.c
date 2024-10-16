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
    float coteuro,cotdolar,valor1,valor2 = 0;
    char moeda1, moeda2;

    printf("Digite a cotação do euro: ");
    scanf("%f", &coteuro);
    printf("Digite a cotação do dolar: ");
    scanf("%f", &cotdolar);
    getchar();
    printf("Sendo a) Euro, b) Dolar, c) Real\n");
    printf("Digite a moeda de origem: ");
    scanf("%c", &moeda1);
    getchar();
    printf("Digite a moeda de destino: ");
    scanf("%c", &moeda2);
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor1);

    if (moeda1 == 'a' && moeda2 == 'b')
    {
        valor2 = valor1 * coteuro / cotdolar;
    }
    else if (moeda1 == 'a' && moeda2 == 'c')
    {
        valor2 = valor1 * coteuro;
    }
    else if (moeda1 == 'b' && moeda2 == 'c')
    {
        valor2 = valor1 * cotdolar;
    }
    else if (moeda1 == 'b' && moeda2 == 'a')
    {
        valor2 = valor1 * cotdolar / coteuro;
    }
    else if (moeda1 == 'c' && moeda2 == 'a')
    {
        valor2 = valor1 / coteuro;
    }
    else if (moeda1 == 'c' && moeda2 == 'b')
    {
        valor2 = valor1 / cotdolar;
    }

    printf("O resultado é %.2f", valor2);

    return 0;
}