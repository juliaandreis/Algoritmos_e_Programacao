/*nao ta funcionando o sorteio das condiçoes climaticas ou nao ta entrando na variavel clima*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int menu,taxa,ciclo,populacaoFinal,populacaoInicial;
	int cont = 1;
	int sorteio = 0;
	char clima[25]; // COMO DECLARAR A VARIAVEL VAZIA?

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
			cont = 0;
		
			while (cont <= ciclo)
			{
				populacaoFinal = populacaoInicial + (populacaoInicial * taxa / 100);
				sorteio = 1 + rand () % 100;
				if (sorteio <= 20) // alta temperatura
				{
					populacaoFinal = (float)populacaoFinal * 0.7;
					clima = "alta temperatura"; // PQ AQUI E EMBAIXO TA DANDO ERRO????????????????????
				}
				else if (sorteio <= 35) // falta de nutrientes
				{
					populacaoFinal = (float)populacaoFinal * 0.75;
					clima = "falta de nutrientes";
				}
				else if (sorteio <= 45) // excesso de umidade
				{
					populacaoFinal = (float)populacaoFinal * 0.8;
					clima = "excesso de umidade";
				}
				else if (sorteio <= 50) // radiacao ultravioleta
				{
					populacaoFinal = (float)populacaoFinal * 0.5;
					clima = "radiacao ultravioleta";
				}
				else if (sorteio <= 60) // condicao favoravel
				{
					populacaoFinal = (float)populacaoFinal * 1.2;
					clima = "condicao favoravel";
				}
				
				printf("Ciclo %d = %d",cont,populacaoFinal);
				if (clima != "\0")
				{
					printf("condição adversa: %s", clima);
				}
				
				populacaoInicial = populacaoFinal;
				cont++;
			}
			
		}

	} while (menu != 2);
	
	printf("Programa encerrado.");

	return 0;
}