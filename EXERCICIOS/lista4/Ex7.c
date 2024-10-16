/*Descubra, dentre cinco nomes informados pelo usuário, qual o primeiro em ordem alfabética*/

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20], menor[20] = "zzzzzz";
    
    printf("Digite cinco nomes:\n");
    for(int cont = 1;cont<=5;cont++)
    {
        printf("%d° nome: ", cont);
        scanf("%s", &nome);
        if (strcmp(nome,menor) < 0)
        {
            strcpy(menor,nome);
        }
    }
    
    printf("O primeiro nome é %s.", menor);
    
    return 0;
}