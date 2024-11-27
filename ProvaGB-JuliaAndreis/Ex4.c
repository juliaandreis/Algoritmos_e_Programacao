/* Programa “Cebolinha”: ler uma string (array de char) e converter todos os r's em
l's.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    char flase[100];
    printf("Digite uma palavra ou frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(int i = 0; i < sizeof(frase); i++)
    {
        if(frase[i] == 'r')
        {
            flase[i] = 'l';
        }
        else
        {
            flase[i] = frase[i];
        }
    }

    printf("Nova frase: %s", flase);

    return 0;
}