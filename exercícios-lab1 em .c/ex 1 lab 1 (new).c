#include <stdlib.h>
#include <stdio.h>

/* . Fa�a uma solu��o para o usu�rio informar seu sal�rio e reajuste-o em 10%. Imprima o sal�rio atual e o sal�rio reajustado. */

int main(int argc, char** argv) {
	int s, sreaj;
	printf ("\n insira o valor do seu salario para reajuste \n");
	scanf ("%d", &s);
	sreaj = s+ (0.1*s);
	printf ("\n seu salario atual e %d R$ \n", s);
	printf ("\n seu novo salario com reajuste e %d R$ \n", sreaj);
	system ("pause");
	
	return 0;
}
