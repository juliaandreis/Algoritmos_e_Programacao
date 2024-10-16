/*Em um sistema de controle para uma casa inteligente, você deseja automatizar a irrigação de
um jardim. O programa deve ler a umidade do solo (em porcentagem) medida por 5 sensores.
Se a umidade estiver abaixo de 30% em algum sensor, o programa deve ativar a irrigação e
exibir uma mensagem indicando o sensor que disparou a ação.*/

#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    
    printf("Digite a umidade do solo detectada por cada sensor:\n");
    printf("Sensor 1: ");
    scanf("%d", &s1);
    printf("Sensor 2: ");
    scanf("%d", &s2);
    printf("Sensor 3: ");
    scanf("%d", &s3);
    printf("Sensor 4: ");
    scanf("%d", &s4);
    printf("Sensor 5: ");
    scanf("%d", &s5);

    if (s1 < 30 || s2 < 30 || s3 < 30 || s4 < 30 || s5 < 30)
    {
        printf("A irrigação foi ativada.");
    }
    else
    {
        printf("A irrigação não precisou ser ativada.");
    }

    return 0;
}