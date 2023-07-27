#include <stdio.h>
#include <stdlib.h>

/* 4. Apresente como resultado a soma dos cem primeiros números naturais. */

int main(int argc, char *argv[]) {
	int soma=0, cont;
	for (cont=1; cont<=100; cont++){
		soma=soma+cont;
	}
	printf ("a soma dos cem primeiros numeros naturaid e: %d\n", soma);
	system ("pause");
	return 0;
}
