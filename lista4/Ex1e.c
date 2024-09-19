/*e. Ler 15 números e escrever a soma e a média dos números lidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int cont = 1;
    int soma = 0;
    int n;
    float media;

    while (cont < 16)
    {  
        printf("Digite o %d° número: ", cont);
        scanf("%d", &n);
        soma = soma + n;
        cont++;
    }
    
    media = (float) soma / 15;

    printf("\n");
    printf("SOMA = %d\n", soma);
    printf("MEDIA = %.2f", media);


    return 0;
}

