#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int LINHAS = 5;
const int COLUNAS = 7;

int main()
{
    int M[3][4] = { 1, 2, 3, 4,
                    5, 6, 7, 8,
                    9, 10, 11, 12 };
    for (int l = 0; l<3; l++)// percorrendo as linhas
    {
        for(int c = 0; c<4; c++) // percorre as colunas
        {
            printf("%d\t", M[l][c]);
        }
        printf("\n");
    }
    printf("\n");
    srand(time(0));
    int N[LINHAS][COLUNAS];
    for(int i=0; i<LINHAS; i++)
    {
        for(int j=0; j<COLUNAS; j++)
        {
            N[i][j] = rand() % 10 + 1;
            printf("%d ", N[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}