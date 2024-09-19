#include <stdio.h>

int main ()
{
    int cont = 0;
    
    while (cont <= 10)
    {
        printf("olá mundo! contador: %d\n", cont);
        cont = cont + 2;
    }

    printf("\n");
    cont = 0;
    while (cont <= 10)
    {
        printf("olá mundo! contador: %d\n", cont);
        cont = cont + cont + 2;
    }

    return 0;
}