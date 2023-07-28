#include <stdio.h>
#include <stdlib.h>

/* 3. Elaborar um algoritmo que leia números e imprima no final quantos números entre 
100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo deve parar a 
sua execução. */

int main(int argc, char *argv[]) {
	int num, digitados, soma;
	digitados==0;
	soma==0;
	do {
	printf ("\ndigite o numero\n");
	scanf ("%d", &num);
	digitados++;
		if (num>=100 && num<=200){
			soma++
			printf ("\nvoce digitou %d numeros e entre 100 e 200", digitados);	
		}
	}while (num!=0);
	system ("pause");
	return 0;
}
