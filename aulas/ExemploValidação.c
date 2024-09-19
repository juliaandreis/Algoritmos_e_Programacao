#include <stdio.h>

int main ()
{
    char opcao ='\0';
    
    printf("");
    
    while (opcao != 'S' && opcao != 'N');
    {
        printf("Digite S/N");
        scanf("%c", opcao);
        opcao = toupper(opcao); // para identificar se estivel maiuicula ou minuscula
    }


    return 0;
}