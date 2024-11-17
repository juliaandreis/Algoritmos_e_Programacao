#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarToupeira(char matriz[4][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            matriz[i][j] = '-';
        }    
    }

    int numToupeiras = 1;

    while(numToupeiras <= 4)
    {
        int i = rand() % 4;
        int j = rand() % 4;

        if(matriz[i][j] == '-')
        {
            matriz[i][j] = 'T';
            numToupeiras++;
        }
    }
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%c", matriz[i][j]);
        } 
        printf("\n");   
    }
    
}

int main()
{
    srand(time(0));

    char toupeira[4][4];
    for(int ger = 1; ger <= 3; ger++)
    {
        printf("%dª GERAÇÃO:\n", ger);
        gerarToupeira(toupeira);
        printf("\n");
    }

    return 0;
}