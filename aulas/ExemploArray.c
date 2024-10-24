#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Criação de um array com 10 inteiros
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    
    //como calcular o tamanho do array
    int tam = sizeof(A) / sizeof(A[0]);
    printf("tamanho = %d\n",tam);

    printf("O terceiro elemento é: %d\n",A[2]);

    printf("O último elemento é %d\n",A[tam-1]); // PARA DECLARAR O ARRAY N PODE USAR VARIÁVEIS, PRA PUXAR PODE

    float B[5];

    //atribuir um valor a um elemento do array
    B[0] = 3.14159;
    B[1] = 9.9;
    B[2] = B[0] + B[1];

    printf("%f + %f = %f\n", B[0], B[1], B[2]);

    //percorrer o array e inicializar todas as posiçõesmusando um contador como o indice para acessá-lo
    srand(time(0));
    for(int i=0; i < 5; i++)
    {
        B[i] = rand() % 101 / 100.0;
        printf("B[%d] = %.2f\n", i, B[i]);       
    }
    return 0;
}