/*Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme
as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou
em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau
A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o
grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado.*/

#include <stdio.h>

int main()
{
    float ga,gb,media,gc;
    char substituir;

    printf("Digite a nota do Grau A: ");
    scanf("%f", &ga);
    printf("Digite a nota do Grau B: ");
    scanf("%f", &gb);

    media = (ga + 2 * gb) / 3;
    printf("\n");
    printf("Sua média é %.2f.\n", media);

    if(media >= 6)
    {
        printf("Você passou.");
    }
    else
    {
        printf("Você está de recuperação (Grau C).\n");
        printf("Qual nota deseja substituir? Digite a para Grau A e b para Grau B: ");
        getchar();
        scanf("%c", &substituir);
        printf("Digite a nota do Grau C: ");
        scanf("%f", &gc);

        printf("\n");

        if (substituir == 'a')
        {
            media = (gc + 2 * gb) / 3;
        }
        else if (substituir == 'b')
        {
            media = (ga + 2 * gc) / 3;
        }

        printf("Sua nova média é %.2f.\n", media);

        if(media >= 6)
        {
            printf("Você passou.");
        }
        else
        {
            printf("Você reprovou.");
        }
    }
    return 0;
}