/*Correção de provas objetivas: faça um programa que permita cadastrar um vetor com
o gabarito de uma prova objetiva contendo 10 questões, cujos resultados podem ser de ‘a’ a ‘f’.
Depois disso, permita ao usuário a opção de entrar com as respostas dadas por um estudante.
*/

#include <stdio.h>

int main()
{
    char gabarito[10] = {'a','d','b','f','e','c','c','a','f','b'};
    char resposta[10];
    int pontuacao = 0;

    printf("Respostas do aluno:\n");
    for(int i = 0; i < 10; i++)
    {   
        scanf(" %c", &resposta[i]);
    }
    printf("\n");

    printf("Gabarito: ");
    for(int i = 0; i < 10; i++)
    {   
        printf(" %c", gabarito[i]);
    }
    
    printf("\n");

    printf("Respostas: ");
    for(int i = 0; i < 10; i++)
    {   
        printf(" %c", resposta[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Questão %d: ", i+1);

        if(resposta[i] == gabarito[i])
        {
            printf("resposta correta.\n");
            pontuacao++;
        }
        else
        {
            printf("resposta incorreta. A resposta correta é %c.\n", gabarito[i]);
        }
    }
    printf("A pontuação do estudante é %d/10", pontuacao);

    return 0;
}