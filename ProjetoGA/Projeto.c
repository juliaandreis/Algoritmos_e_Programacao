#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int menu, populacaoInicial, populacaoFinal,taxa,ciclos;
	int cont = 1;
	int sorteio = 0;

	printf("Bem vindo ao programa de simulacao de crescimento bacteriano!\n");
	do
	{
		printf("1 - Nova simulacao\n");
		printf("2 - Sair do programa\n");
		scanf("%d", &menu);
		if (menu != 1 || 2)
		{
			printf("Opção invalida. Tente novamente.\n");
		}
	} while (menu != 1 || 2);

	if (menu == 1)
	{
		printf("Digite a populacao inicial: ");
		scanf("%d", &populacaoInicial);
		printf("Digite a taxa de crescimento: ");
		scanf("%d", &taxa);
		printf("Digite a quantidade de ciclos: ");
		scanf("%d", &ciclos);

		while (cont <= ciclos)
		{
			populacaoFinal = populacaoInicial + (populacaoInicial * taxa / 100);
			printf("Ciclo 1 = %d\n", populacaoFinal);

			sorteio = 1 + rand () % 20;
			if (sorteio == 1 || 2 || 3 || 4) // alta temperatura
			{
			    populacaoFinal = populacaoFinal * 0,7;
			}
            else if (sorteio == 5 || 6 || 7) // falta de nutrientes
			{
			    populacaoFinal = populacaoFinal * 0.75;
			}
            else if (sorteio == 8 || 9) // excesso de umidade
			{
			    populacaoFinal = populacaoFinal * 0.8;
			}
            else if (sorteio == 10) // radiacao ultravioleta
			{
			    populacaoFinal = populacaoFinal * 0.5;
			}
            else if (sorteio == 11 || 12) // condicao favoravel
			{
			    populacaoFinal = populacaoFinal * 1.2;
			}
			
            printf("Ciclo %d = %d", ciclos, populacaoFinal);
            populacaoInicial = populacaoFinal;
            cont++;
		}
	}
	else
	{
		printf("Programa encerrado.");
	}

	return 0;
}