/*Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa
que leia a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.*/

#include <stdio.h>

int main()
{
    float celsius, farenheit;
    printf("Digite a temperatra em Celsius: ");
    scanf("%f", &celsius);
    farenheit = celsius * 1.8 + 32;
    printf("A temperatura em Farenheit é %.2f", farenheit);

    return 0;
}
