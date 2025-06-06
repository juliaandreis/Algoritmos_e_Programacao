/*Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema
de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C
e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se
estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a
média geral dos alunos.*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int n;
    float ga,gb,media,medias,gc;
    char substituir;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
   
    for (int cont = 1; cont <= n; cont++)
    {
        printf("%d° Aluno:\n",cont);
        printf("Digite a nota do Grau A: ");
        scanf("%f", &ga);
        printf("Digite a nota do Grau B: ");
        scanf("%f", &gb);

        media = (ga + 2 * gb) / 3;

        if(media >= 6)
        {
            printf("APROVADO");
        }
        else
        {
            printf("Digite a nota do Grau C: ");
            scanf("%f", &gc);
            printf("Qual nota deseja substituir? Digite A para Grau A e B para Grau B: ");
            getchar();
            scanf("%c", &substituir);
            substituir = tolower(substituir);
            
            if (substituir == 'a')
            {
                media = (gc + 2 * gb) / 3;
            }
            else if (substituir == 'b')
            {
                media = (ga + 2 * gc) / 3;
            }

            if(media < 6)
            {
                printf("REPROVADO");
            }
            else 
            {
                printf("APROVADO");
            }
            printf("\n");
        }
        medias = medias + media;

    }

    medias = medias / n;
    printf("\nA média geral dos alunos é %.2f", medias);


    return 0;
}
