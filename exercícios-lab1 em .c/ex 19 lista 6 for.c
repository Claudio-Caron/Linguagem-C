#include <stdio.h>
#include <stdlib.h>

/* 19. Leia um número n e imprima a soma dos números múltiplos de 5 no intervalo entre 1 e 
n. Suponha que n será maior que zero */

int main(int argc, char *argv[]) {
	int n, soma, i;
	printf ("digite o numero para mostrar os multiplos do mesmo\n");
	scanf ("%d", &n);
	for (i=n; i>=1; i--)
	{
	soma=i*5;
	printf ("o produto de %d x 5 e:%d\n", i, soma);
	}
	system ("pause");
	return 0;
}
