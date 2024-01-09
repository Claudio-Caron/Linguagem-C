#include <stdio.h>
#include <stdlib.h>

/* 6. Elaborar um algoritmo que leia vários números até entrar o número -999. Para cada 
número imprimir seus divisores. */

int main(int argc, char *argv[]) {
	int div, cont=1, num;
	do
	{
		printf ("\nDigite o numero para mostrar seus divisores\n(para encerrar, digite '-999')\n");
		scanf ("%d", &num);
		if (num==-999){
			printf ("COMANDO DE PARADA!\n");
			break;
		}
		printf ("\n%d e divisivel por\n", num);
		do {
			div=num%cont;
			if (div==0){
				printf ("%d, ", cont);
			}
			cont++;
	 	}while (num>=cont);
		
	}while (num!=-999);
	system ("pause");
	return 0;
}
