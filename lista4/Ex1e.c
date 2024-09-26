/*e. Ler 15 números e escrever a soma e a média dos números lidos.*/

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
    int max = 1 + rand() % 15;

    /*printf("Digite 15 números:\n");

    while (cont < 16)
    {  
        printf("%d° número: ", cont);
        scanf("%d", &n);
        soma = soma + n;
        cont++;
    }

    //PARA SORTEAR OS NUMEROS: (PQ NAO TA FUNCIONANDOOOOOO?????????????)
    
    while (cont < 16)
    {  
        n = 1 + rand() % (10);
        printf("%d° número: ", cont);
        soma = soma + n;
        cont++;
    }
    
    media = (float) soma / 15;

    printf("\n");
    printf("SOMA = %d\n", soma);
    printf("MEDIA = %.2f", media);*/

//-------------------------------------------------------------
//Resolução do problema com o for
    max = 6;
    soma = 0;

    for(int cont = 1; cont < max; cont++)
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