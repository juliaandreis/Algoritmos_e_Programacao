/*e. Ler 15 números e escrever a soma e a média dos números lidos.*/

//Resolução do problema com o for

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    int cont = 1;
    int soma = 0;
    int n;
    float media;

    for(int cont = 1; cont < 16; cont++)
    {
        n = 1 + rand() % (10);
        printf("%d° número: %d\n", cont, n);
        soma = soma + n;
    }
    
    media = (float) soma / 15;

    printf("\n");
    printf("SOMA = %d\n", soma);
    printf("MEDIA = %.2f", media);

    return 0;
}