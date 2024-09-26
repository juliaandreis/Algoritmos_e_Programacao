#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int menu,taxa,ciclo;
	int cont = 1;
	int sorteio = 0;
	float populacaoFinal,populacaoInicial;

	printf("Bem vindo ao programa de simulacao de crescimento bacteriano!\n");

	do
	{
		printf("1 - Nova simulacao\n");
		printf("2 - Sair do programa\n");
		scanf("%d", &menu);

		if (menu != 1 && menu != 2)
		{
			printf("Opção invalida. Tente novamente.\n");
		}
		else if (menu == 1)
		{
			printf("Digite a populacao inicial: ");
			scanf("%d", &populacaoInicial);
			printf("Digite a taxa de crescimento: ");
			scanf("%d", &taxa);
			printf("Digite a quantidade de ciclos: ");
			scanf("%d", &ciclo);

			while (cont <= ciclo)
			{
				populacaoFinal = populacaoInicial + (populacaoInicial * taxa / 100);
				sorteio = 1 + rand () % 20;
				if (sorteio == 1 || sorteio == 2 || sorteio == 3 || sorteio == 4) // alta temperatura
				{
					populacaoFinal = (float)populacaoFinal * 0,7;
				}
				else if (sorteio == 5 || sorteio == 6 || sorteio == 7) // falta de nutrientes
				{
					populacaoFinal = (float)populacaoFinal * 0.75;
				}
				else if (sorteio == 8 || sorteio == 9) // excesso de umidade
				{
					populacaoFinal = (float)populacaoFinal * 0.8;
				}
				else if (sorteio == 10) // radiacao ultravioleta
				{
					populacaoFinal = (float)populacaoFinal * 0.5;
				}
				else if (sorteio == 11 || sorteio == 12) // condicao favoravel
				{
					populacaoFinal = (float)populacaoFinal * 1.2;
				}
				
				printf("Ciclo %d = %d\n",cont,populacaoFinal);
				populacaoInicial = populacaoFinal;
				cont++;
			}
		}

	} while (menu != 2);
	
	printf("Programa encerrado.");

	return 0;
}