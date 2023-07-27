#include <stdio.h>
#include <stdlib.h>

/* 30. Criar um algoritmo/programa em C que deixe o usuário escolher qual a tabuada de 
multiplicar que se deseja imprimir. */

int main(int argc, char *argv[]) {
	int num, i, re;
	printf ("digite o numero para saber a tabuada do 0 ao 10\n");
	scanf ("%d", &num);
	printf ("TABUADA DO %d\n", num);
	for (i=0; i<=10; i++){
		re=num*i;
		printf ("%d X %d= %d\n", num, i, re);
	}
	system ("pause");
	return 0;
}
