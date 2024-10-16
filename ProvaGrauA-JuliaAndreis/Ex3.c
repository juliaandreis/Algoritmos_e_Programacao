/*Em um experimento geológico, sensores medem o deslocamento de uma placa tectônica (em
centímetros) a cada dia. Escreva um programa que leia os valores de deslocamento para 5
dias e exiba:
a) O deslocamento total ao longo do período.
b) O maior deslocamento registrado.
c) A média de deslocamento diário.*/

#include <stdio.h>

int main()
{
    int deslocamento, total = 0, maior = 0;
    float media;

    printf("Digite o deslocamento diário da placa tectônica em centímetros:\n");
    for (int cont = 1; cont <= 5; cont++)
    {
        printf("%d° dia: ", cont);
        scanf("%d", &deslocamento);
        if (deslocamento > maior)
        {
            maior = deslocamento;
        }
        total = total + deslocamento;
    }

    media = (float)total / 5;
    printf("\n");
    printf("O deslocamento total foi de %d centímetros.\n", total);
    printf("O meior deslocamento registrado foi de %d centímetros.\n", maior);
    printf("A média de deslocamento diário foi de %.1f centímetros.\n", media);

    return 0;
}