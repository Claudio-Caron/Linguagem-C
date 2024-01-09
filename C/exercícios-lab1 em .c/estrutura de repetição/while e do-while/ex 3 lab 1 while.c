#include <stdio.h>
#include <stdlib.h>

/* 3. Elaborar um algoritmo que leia números e imprima no final quantos números entre 
100 e 200 foram*/

int main(int argc, char *argv[]) {
	int num, contagem=0;
	do {
		printf ("\npara encerrar o programa, digite 0\n");
		printf ("\ndigite seu numero\n");
		scanf ("%d", &num);
		if (num>=100 && num<=200) {
			contagem++;
		}
	printf ("\nvoce digitou %d numeros entre 100 e 200\n", contagem);
	}while (num!=0);
	
	system ("pause");
	return 0;
}
