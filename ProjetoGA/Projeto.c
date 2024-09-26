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
			
			menu = 0;
		
			while (cont <= ciclo)
			{
				populacaoFinal = populacaoInicial + (populacaoInicial * taxa / 100);
				sorteio = 1 + rand () % 100;
				if (sorteio <= 20) // alta temperatura
				{
					populacaoFinal = (float)populacaoFinal * 0.7;
				}
				else if (sorteio <= 35) // falta de nutrientes
				{
					populacaoFinal = (float)populacaoFinal * 0.75;
				}
				else if (sorteio <= 45) // excesso de umidade
				{
					populacaoFinal = (float)populacaoFinal * 0.8;
				}
				else if (sorteio <= 50) // radiacao ultravioleta
				{
					populacaoFinal = (float)populacaoFinal * 0.5;
				}
				else if (sorteio <= 60) // condicao favoravel
				{
					populacaoFinal = (float)populacaoFinal * 1.2;
				}
				
				printf("Ciclo %d = %f\n",cont,populacaoFinal);
				populacaoInicial = populacaoFinal;
				cont++;
			}
			
		}

	} while (menu != 2);
	
	printf("Programa encerrado.");

	return 0;
}