#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 1. Elaborar um algoritmo que leia números enquanto forem positivos e imprima quantos 
números foram digitados */

int main(int argc, char *argv[]) {
	int vezes, digitados;
	digitados==0;
		do {
		printf ("\ndigite um numero\n");
		scanf ("%d", &vezes);
			if (vezes<0){
			printf ("\nnumero digitado e negativo\n");
			break;
			}
			digitados++;
			printf ("ja foram digitados %d  numeros", digitados);
		} while (vezes>0);
		
		
	
	system ("pause");
	return 0;
}
