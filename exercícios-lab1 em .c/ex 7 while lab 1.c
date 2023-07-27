#include <stdio.h>
#include <stdlib.h>

/* . Elaborar um algoritmo que calcule e imprima o valor de bn
. O valor de n deverá ser 
maior do que 1 e inteiro e o valor de b maior ou igual a 2 e inteiro. */

int main(int argc, char *argv[]) {
	int r;
	float base, potencia;
	do {
	printf ("\nPara encerrar, digite 0!\n");
	printf ("\ndigite b(base da variavel)\n");
	scanf ("%f", &base);
	r= base%1;
		if (base<2 && r=base){
			printf ("digite uma base maior ou igual a 2\n");
			continue;
		}
	printf ("\ndigite o expoente\n");
	scanf ("%f", &potencia);
		if (potencia<=1){
			printf ("digite um expoente maior que 1\n");
			continue;
		}
	r=pow  (base,potencia);
	printf ("resultado e: %d\n", r);
	
		
		
	}while (potencia>1 && base>=2);
	
	system ("pause");
	return 0;
}
