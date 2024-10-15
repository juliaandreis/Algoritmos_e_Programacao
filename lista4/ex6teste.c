#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int valor1, valor2, valor3, valor4, valor5;
    int menor, maior;
    float soma, media;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Sorteia 5 valores entre 0 e 100
    valor1 = rand() % 101;
    valor2 = rand() % 101;
    valor3 = rand() % 101;
    valor4 = rand() % 101;
    valor5 = rand() % 101;

    // Imprime os valores sorteados
    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);
    printf("Valor 3: %d\n", valor3);
    printf("Valor 4: %d\n", valor4);
    printf("Valor 5: %d\n", valor5);

    // Calcula a soma dos valores
    soma = valor1 + valor2 + valor3 + valor4 + valor5;

    // Determina o menor valor
    menor = valor1;
    if (valor2 < menor) menor = valor2;
    if (valor3 < menor) menor = valor3;
    if (valor4 < menor) menor = valor4;
    if (valor5 < menor) menor = valor5;

    // Determina o maior valor
    maior = valor1;
    if (valor2 > maior) maior = valor2;
    if (valor3 > maior) maior = valor3;
    if (valor4 > maior) maior = valor4;
    if (valor5 > maior) maior = valor5;

    // Calcula a média
    media = soma / 5.0;

    // Imprime os resultados
    printf("\nMenor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}