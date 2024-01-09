#include <stdio.h>
#include <stdlib.h>

/* Tarefa 2: Apresente o seguinte menu ao usuário e realize a opção escolhida:
1. Comprar
Mostre a opção de 2 produtos e respectivos valores: ItemA:$50 ItemB:$30.
Compute a compra do usuário para um dos itens
2. Resumo da Compra
Mostre a quantidade de itens comprados de cada produto, total a pagar por
produto, total geral de itens comprados e total geral a pagar
3. Encerrar
Mostre o total de itens comprados e o total a pagar
O menu é exibido enquanto a opção for diferente de 3 */

int main(int argc, char *argv[]) {
	int escolha, valorp, picanha==0, fraldinha==0;
	int item, valorf==0;
	do{
			printf ("\n___________________________________________________");
		printf ("\n| escolha qual das opcoes abaixo deseja realizar  |");
		printf ("\n|_________________________________________________|");
		printf ("\n| 1-COMPRAR | 2-RESUMO DA COMPRA |  3-ENCERRAR    |");
		printf ("\n---------------------------------------------------\n"); 
		printf ("\n|(novamente)|                    |                |");
		printf ("\n---------------------------------------------------"); 
		scanf ("%d", &escolha);
		switch (escolha){
			case 1:
				printf ("\n1- 1KG de Picanha Maturata\n 2- 1 kG de Fraldinha\n");
				printf ("qual corte deseja escolher?1 ou 2?\n");
				scanf ("%d", &item);
				switch (item)
				{
					case 1:
						valorp=valorp+50;
						picanha=picanha+1;
					break;
					case 2: 
						valorf=valorf+30;
						fraldinha=fraldinha+1;
					break;
					default: printf ("escolha a opcao 1 ou 2,");
						continue;
					break;
				}
		}	case 2:
				
	}while(escolha=1);
	
	system ("pause");
	return 0;
}
