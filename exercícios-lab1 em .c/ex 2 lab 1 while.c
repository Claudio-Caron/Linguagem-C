#include <stdio.h>
#include <stdlib.h>

/*2. Elaborar um algoritmo que leia n�meros enquanto forem positivos e imprima a m�dia 
dos n�meros digitados.  */

int main(int argc, char *argv[]) {
	int num, soma=0;
	float media=0;
	do {
		printf ("\ndigite o numero\n");
		scanf ("%d", &num);
		soma++;
		media=(media+num)/soma;
		printf ("\na media dos numeros digitados e:%.2f\n", media);
		
		
		
	}while (num>0);
	
	system ("pause");
	return 0;
}
