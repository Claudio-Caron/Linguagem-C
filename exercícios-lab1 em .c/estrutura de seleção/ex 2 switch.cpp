#include <stdio.h>
#include <stdlib.h>

/* 2. Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. Caso o usuário 
digite um número fora desse intervalo, deverá aparecer uma mensagem informando 
que não existe mês com esse número. */

int main(int argc, char *argv[]) {
	int n;
	printf ("\ndigite o numero para saber o seu respectivo mes do ano\n");
	scanf ("%d", &n);
	switch (n) 
	{
		case 1:
			printf ("janeiro\n");
			break;
		case 2:
			printf ("fevereiro\n");
			break;
		case 3:
			printf ("marco\n");
			break;
		case 4:
			printf ("abril\n");
			break;
		case 5:
			printf ("maio\n");
			break;
		case 6:
			printf ("junho\n");
			break;
		case 7:
			printf ("julho\n");
			break;
		case 8:
			printf ("agosto\n");
			break;
		case 9:
			printf ("setembro\n");
			break;
		case 10:
			printf ("outubro\n");
			break;
		case 11:
			printf ("novembro\n");
			break;
		case 12:
			printf ("dezembro\n");
			break;
		default : 
			printf ("\anumero invalido\n");
			break;
		
	}
	
	system ("pause");
	return 0;
}
