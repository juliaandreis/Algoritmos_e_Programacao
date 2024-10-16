/*Um fisioterapeuta está monitorando o progresso de um paciente que realiza exercícios
diariamente. A cada dia, o paciente registra a quantidade de tempo que conseguiu realizar o
exercício (em minutos). Escreva um programa que leia o tempo de exercício realizado por 7
dias consecutivos e calcule:
a. O total de tempo exercitado na semana.
b. A média de tempo diário.
c. O dia em que o paciente realizou o maior tempo de exercício.*/

#include <stdio.h>

int main()
{
    int dia, tempo, total = 0, maior = 0;
    float media = 0;

    printf("Digite quantos minutos de exercício você praticou em cada dia:\n");

    for(int n = 1; n <= 7; n++)
    {
        printf("%d° dia: ", n);
        scanf("%d", &tempo);

        total = total + tempo;

        if(tempo > maior)
        {
            maior = tempo;
            dia = n;
        }       
    
    }

    media = (float)total / 7;
    printf("Tempo total: %d\n", total);
    printf("Média diária: %.1f\n", media);
    printf("Dia que mais se exercitou: %d", dia);

    return 0;
}