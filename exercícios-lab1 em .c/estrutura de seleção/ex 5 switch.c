#include <stdio.h>
#include <stdlib.h>

/* 5. Ler o pedido de um cliente de fast food, baseado no menu abaixo, e imprimir o preço 
total e a opção que ele escolher. 
Opção 
(única) 
Promoção Especificação Preço 
(R$) 
1 Big Super 
Sanduba 
2 hambúrgueres, queijo, batata fritas 
e refrigerante 
5,00 
2 Quase Super 
Sanduba 
1 hambúrguer, batata fritas e 
refrigerante 
3,00 
3 Mirradus 
Sanduba 
1 misto quente e refrigerante 1,50 */

int main(int argc, char *argv[]) {
	int op, preco;
	printf("\nEsse e o menu de opcoes de combo disponiveis\n");
	printf ("____________________________________________________________________\n");
	printf ("| opcao  |   promocao   |        ingredientes            |   preco   |\n");
	printf ("|(unica) |              |                                |     R$    |\n");
	printf ("|--------------------------------------------------------|-----------|\n");
	printf ("|   1    |   Big super  | 2 hamburgueres, queijo,        |    5,00   |\n");
	printf ("|        |   Sanduba    |   batata frita e refrigerante. |           |\n");
	printf ("|--------|--------------|--------------------------------|-----------|\n");
	printf ("|   2    | Quase super  | 1 hambueguer, batata frita,    |    3,00   |\n");
	printf ("|        |   Sanduba    |      e refrigerante.           |           |\n");
	printf ("|--------------------------------------------------------|-----------|\n");
	printf ("|   3    |   Mirradus   | 1 misto quente e refrigerante. |    1,50   |\n");
	printf ("|        |   Sanduba    |                                |           |\n");
	printf ("|________|______________|________________________________|___________|\n");
	printf ("\nQual opcao deseja escolher? 1, 2 ou 3?\n");
	scanf ("%d", &op);
	switch (op){
		case 1: 
		printf ("\nCOMBO ESCOLHIDO-> Opcao 1:\nBig Super Sanduba\n\nTOTAL A PAGAR: R$ 5,00.\n");
		break;
		case 2: 
		printf ("\nCOMBO ESCOLHIDO-> Opcao 2:\nQuase Super Sanduba\n\nTOTAL A PAGAR: R$ 3,00.\n");
		break;
		case 3: 
		printf ("\nCOMBO ESCOLHIDO-> Opcao 3:\nMirradus Sanduba\n\nTOTAL A PAGAR: R$ 1,50.\n");
		break;
		default : 
		printf ("\a\nOpcao nao encontrada, digite 1 para escolher a primeira opcao, 2 para a segunda e 3 para a terceira.\n");
		break;
		
	}
	system ("pause");
	return 0;
}
