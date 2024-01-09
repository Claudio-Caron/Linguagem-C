#include <stdio.h>
#include <stdlib.h>

/* 8. Apresente o somatório dos valores pares existentes na faixa de 1 a 500. */

int main(int argc, char *argv[]) {
	int soma=0, par;
	for (par=2;par>=1 && par<=500; par=par+2){
		soma=soma+par;
	}
	printf ("a soma de todos os pares de 1 ate 500 e :%d\n", soma);
	system ("pause");
	return 0;
}
