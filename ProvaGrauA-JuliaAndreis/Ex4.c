/*Você está desenvolvendo um simulador ambiental que mede o nível de poluição do ar em
uma cidade. O nível de poluição é medido a cada 3 horas. Escreva um programa que leia 8
medições (um dia completo) e determine:
a) A média de poluição diária.
b) Se alguma medição excedeu 150 ppm (partes por milhão), exiba uma mensagem de
alerta sobre qualidade do ar.
c) Ao final, exiba o número total de medições que geraram um alerta.*/

#include <stdio.h>

int main()
{
    int poluicao, alerta = 0;
    float media = 0;

    printf("Digite o resultado das medições de poluição registradas a cada 3 horas:\n");
    for(int cont = 1; cont <= 8; cont++)
    {
        printf("Medição %d: ", cont);
        scanf("%d", &poluicao);
        if(poluicao > 150)
        {
            printf("ALERTA! Poluição acima do esperado.\n");
            alerta = alerta + 1;
        }
        media = (float)media + poluicao;
    }

    media = media / 8;
    printf("\n");
    printf("A média de poluição diária foi de %.1f ppm\n", media);
    printf("Foram registradas %d medições que geraram alerta.", alerta);

    return 0;
}