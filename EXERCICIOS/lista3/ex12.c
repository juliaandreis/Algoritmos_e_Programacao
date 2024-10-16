/*A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um
algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("A categoria do nadador é Infantil A.");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("A categoria do nadador é Infantil B.");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("A categoria do nadador é Juvenil A.");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("A categoria do nadador é Juvenil B.");
    }
    else
    {
        printf("A categoria do nadador é Senior.");
    }

    return 0;
}