#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*5. Elaborar um algoritmo que leia v�rios n�meros positivos e imprimir o quadrado de 
cada n�mero at� entrar um n�mero m�ltiplo de 6 que dever� ter seu quadrado 
impresso tamb�m*/

int main (int argc, char *argv[]) {
	int num, quadrado, quadrado6, mod;
	quadrado=0;
	do {
		printf ("\ndigite um numero\n");
		scanf ("%d", &num);
		quadrado=pow(num,2);
		printf ("\no quadrado de %d e %d\n", num, quadrado);
		mod=num%6;
		quadrado=num%6;
			if (mod!=0)
				continue;	
		num=num/6;
		quadrado6=pow(num,2);
		printf ("\no numero digitado e multiplo de 6,\n o quadrado de %d (divisao do digitado por 6) e :%d\n", num, quadrado6);
		mod=0;
		
	}while (quadrado!=0);
	
	
	return 0;
}
