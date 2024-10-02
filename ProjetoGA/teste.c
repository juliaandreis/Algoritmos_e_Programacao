/*nao ta funcionando o sorteio das condiçoes climaticas ou nao ta entrando na variavel clima*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	srand(time(0));
	int menu,taxa,ciclo,populacaoFinal,populacaoInicial;
	int cont = 1;
	int sorteio = 0;
	char clima[30]; // COMO DECLARAR A VARIAVEL VAZIA?

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
			cont = 1;
		
			while (cont <= ciclo)
			{
				populacaoFinal = populacaoInicial + (populacaoInicial * taxa / 100);
				sorteio = 1 + rand () % 100;
				printf("sorteio: %d\n", sorteio);
				if (sorteio <= 20) // alta temperatura
				{
					populacaoFinal = (float)populacaoFinal * 0.7;
					strcpy(clima, "alta temperatura"); // PQ AQUI E EMBAIXO TA DANDO ERRO????????????????????
				}
				else if (sorteio <= 35) // falta de nutrientes
				{
					populacaoFinal = (float)populacaoFinal * 0.75;
					strcpy(clima, "falta de nutrientes");
				}
				else if (sorteio <= 45) // excesso de umidade
				{
					populacaoFinal = (float)populacaoFinal * 0.8;
					strcpy(clima, "excesso de umidade");
				}
				else if (sorteio <= 50) // radiacao ultravioleta
				{
					populacaoFinal = (float)populacaoFinal * 0.5;
					strcpy(clima, "radiacao ultravioleta");
				}
				else if (sorteio <= 60) // condicao favoravel
				{
					populacaoFinal = (float)populacaoFinal * 1.2;
					strcpy(clima, "condicao favoravel");
				}

				if (clima != "\0")// acho que isso ta errado
        
				{
					printf("Ciclo %d = %d\n",cont,populacaoFinal);//população final vai ficar como %d ou %f?
				}
				else if
				{
					printf("Ciclo %d = %d (condição adversa: %s)\n",cont,populacaoFinal, clima);
				}
				
				populacaoInicial = populacaoFinal;
				cont++;
			}
			
		}

	} while (menu != 2);
	
	printf("Programa encerrado.");

	return 0;
}