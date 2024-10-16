/*Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números
que deverão ser lidos e também deve ser lido do teclado)*/

#include <stdio.h>

int main ()
{
    int n, x, soma = 0;

    printf("Digite a quantidade de números que você deseja somar: ");
    scanf("%d", &n);
    
    for(int cont = 1; cont <= n; cont++)
    {
        printf("Digite o %d° número: ", cont);
        scanf("%d", &x);
        soma = soma + x;
    }
    printf("A soma é %d", soma);

    return 0;
}