#include <stdio.h>
#include <stdlib.h>

/* 2. Ler um n�mero inteiro entre 1 e 12 e escrever o m�s correspondente. Caso o usu�rio 
digite um n�mero fora desse intervalo, dever� aparecer uma mensagem informando 
que n�o existe m�s com esse n�mero. */

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
