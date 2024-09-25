#include <stdio.h>

int main()
{
    int cont = 1; //sempre iniciar o contador, pois a variável começã com "sujeira" na memória

    while (cont <= 5)
    {
        printf("olá mundo! contador: %d\n", cont);
        cont++; //incrementa o contador (conta = cont + 1). Para diminuir, "cont--"
    }
    
    printf("\n");
    while (cont >= 0)
    {
        printf("olá mundo! contador: %d\n", cont);
        cont--;
    }

    return 0;
}