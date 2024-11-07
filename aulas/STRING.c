#include <stdio.h>
#include <string.h>

// .\NomeDoArquivo.exe para executar direto o programa.

const int MAX_STRING = 30;

int main()
{
    char palavra[MAX_STRING]; // string, é na verdade, um array de caracteres.
    
    //Atribuição de um valo para uma variável string - usar função strcpy:
    strcpy(palavra, "banana");
    printf("%s\n", palavra);

    //leitura de uma string:
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    printf("%s\n", palavra);

    //descobrir o tmanho da string:
    int tam = strlen(palavra);
    printf("A palavra %s possui %d carasteres.\n", palavra, tam);

    //Percorrendo o array e contando a ocorrência da letra a:
    int cont = 0;
    for(int i = 0; i < tam;i++)
    {
        if (palavra[i] == 'a')
        {
            cont++;
        }
    }
    printf("Quantidade de letras A's: %d\n", cont);

    char senhaSalva[15], senhaDigitada[15];
    strcpy(senhaSalva, "12345ABC");
    printf("Digite sua senha: ");
    scanf("%s", &senhaDigitada);
    if(strcmp(senhaSalva, senhaDigitada)==0)
    {
        printf("Acertou a senha!\n");
    }
    else
    {
        printf("Errou a senha!\n");
    }

    return 0;
}