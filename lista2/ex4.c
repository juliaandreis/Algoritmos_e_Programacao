/*Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do
grau A e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau
B 2/3.
*/

#include <stdio.h>

int main()
{
    float ga,gb,final;
    printf("Digite sua nota do Grau A e depois do Grau B:\n");
    scanf("%f",&ga);
    scanf("%f",&gb);
    final = (ga + 2 * gb) / 3;
    printf("Sua nota final é %f.", final);

    return 0;
}