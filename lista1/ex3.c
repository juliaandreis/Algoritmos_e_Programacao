/*Qual o nome do Batman?*/

#include <stdio.h>

int main()
{
    char alternativa[1];
    printf("Qual é o verdadeiro nome do super-herói Batman?\n");
    printf("a) Bruce Wayne\n");
    printf("b) Clark Kent\n") ;
    printf("c) Peter Parker\n");
    printf("d) Tony Stark\n");
    printf("e) Steve Rogers\n");
    scanf("%s", alternativa);
    printf("Você respondeu alternativa %s. A resposta correta é a alternativa a", alternativa);

    return 0;
}