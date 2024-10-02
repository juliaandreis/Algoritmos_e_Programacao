/*O programa faz uma simulação de crescimento bacteriano, levando em consideracao possiveis intemperies.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int menu,taxa,ciclo,populacaoFinal,populacaoInicial,clima;
	int cont = 1;
	int sorteio = 0;

	printf("Bem vindo ao programa de simulacao de crescimento bacteriano!\n");

	do
	{
		printf("1 - Nova simulacao\n");
		printf("2 - Sair do programa\n");
		printf("Escolha uma opção: ");
		scanf("%d", &menu);
		printf("\n");

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
			
			printf("\n");
			
			sorteio = 0;
			menu = 0;
			cont = 1;
		
			while (cont <= ciclo)
			{
				populacaoFinal = populacaoInicial + (populacaoInicial * taxa / 100);
				sorteio = 1 + rand () % 100;
				
				if (sorteio <= 20) // alta temperatura
				{
					populacaoFinal = (float)populacaoFinal * 0.7;
					clima = 1;
				}
				else if (sorteio <= 35) // falta de nutrientes
				{
					populacaoFinal = (float)populacaoFinal * 0.75;
					clima = 2;
				}
				else if (sorteio <= 45) // excesso de umidade
				{
					populacaoFinal = (float)populacaoFinal * 0.8;
					clima = 3;
				}
				else if (sorteio <= 50) // radiacao ultravioleta
				{
					populacaoFinal = (float)populacaoFinal * 0.5;
					clima = 4;
				}
				else if (sorteio <= 60) // condicao favoravel
				{
					populacaoFinal = (float)populacaoFinal * 1.2;
					clima = 5;
				}
				else
				{
					clima = 0;
				}

				//saída de dados:
				if (clima == 1)
				{
					printf("Ciclo %d = %d (condição adversa: alta temperatura)\n",cont,populacaoFinal);
				}
				else if (clima == 2)
				{
					printf("Ciclo %d = %d (condição adversa: falta de nutrientes)\n",cont,populacaoFinal);
				}
				else if (clima == 3)
				{
					printf("Ciclo %d = %d (condição adversa: excesso de umidade)\n",cont,populacaoFinal);
				}
				else if (clima == 4)
				{
					printf("Ciclo %d = %d (condição adversa: radiacao ultravioleta)\n",cont,populacaoFinal);
				}
				else if (clima == 5)
				{
					printf("Ciclo %d = %d (condicao favoravel)\n",cont,populacaoFinal);
				}
				else
				{
					printf("Ciclo %d = %d\n",cont,populacaoFinal);//população final vai ficar como %d ou %f?
				}

				//printf("sorteio: %d\n", sorteio);
				populacaoInicial = populacaoFinal;
				cont++;
			}
			
		}
	printf("\n");
	printf("Simulacao concluida. Populacao final: %d\n", populacaoFinal);
	printf("\n");

	} while (menu != 2);
	
	printf("Programa encerrado.");

	return 0;
}