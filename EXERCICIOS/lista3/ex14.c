/*Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do
conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes)
conforme a seguinte tabela:
a) crianças com menos de 10 anos pagam R$100;
b) dependentes com idade entre 10 e 30 anos pagam R$220;
c) dependentes com idade entre 31 e 60 anos pagam R$ 395; 
d) dependentes com mais de 60 anos pagam R$ 480.*/

#include <stdio.h>

int main()
{
    int idade, idadeAd, total = 300;
    char dependentes;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Você tem dependentes? Digite s para sim e n para não: ");
    getchar();
    scanf("%c", &dependentes);

    if (dependentes == 'n')
    {
        printf("O valor do plano de saúde é %d.", total);
    }
    else if (dependentes == 's')
    {
        printf("Digite a idade do dependente: ");
        scanf("%d", &idadeAd);

        if (idadeAd <= 10)
        {
            total = total + 100;
        }
        else if (idadeAd > 10 && idadeAd <= 30)
        {
            total = total + 220;
        }
        else if(idadeAd > 30 && idadeAd <= 60)
        {
            total = total + 395;
        }
        else
        {
            total = total + 480;
        }

        printf("O valor do plano de saúde é %d.", total);
    }

    return 0;
}