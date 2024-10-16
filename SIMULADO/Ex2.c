#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a,b,c,e;
    float d;
    char f;

    printf("a) Sorteia um número entre 130 e 670:\n");
    
    a = 130 + rand() % 541;
    printf("%d\n",a);

    printf("b) Sorteia um número entre -20 e -5:\n");

    b = (5 + rand() % 16)* -1;
    printf("%d\n",b);

    printf("c) Sorteia um número entre -10 e 10:\n");

    c = (0 + rand() % 20) - 10;
    printf("%d\n",c);

    printf("d) Sorteia um número entre 10.5 e 50.2:\n");

    d = (float)(105 + rand() % 407) / 10;
    printf("%.1f\n",d);

    printf("e) Sorteia um número entre 0 e 100, que seja múltiplo de 5:\n");

    e = (0 + rand() % 20) * 5;
    printf("%d\n",e);

    printf("f) Sorteia um caracter entre 'A' (65) e 'Z' (90):\n");

    f = ('A' + rand() % ('Z' - 'A' + 1));
    printf("%c\n",f);

    return 0;
}