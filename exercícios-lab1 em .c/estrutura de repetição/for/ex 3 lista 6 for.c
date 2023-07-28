#include <stdio.h>
#include <stdlib.h>

/* 3. Imprima todos os múltiplos de 5 no intervalo de 1 a 500 */

int main(int argc, char *argv[]) 
{
	int intei;
	for (intei=5;intei<=500; intei=intei+5)
		printf ("%d, ", intei);
	system ("pause");
	return 0;
}
