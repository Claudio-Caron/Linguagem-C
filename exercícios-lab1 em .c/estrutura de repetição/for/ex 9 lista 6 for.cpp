#include <stdio.h>
#include <stdlib.h>

/* 9. Apresente todos os valores numéricos divisíveis por 4 e menores que 200 */

int main(int argc, char *argv[]) {
	int num, mod;
	printf ("os numeros maiores que 0 e menores que 200 que sao divisiveis po 4 sao:\n");
	for (num=4; num<200; num++){
	mod=num%4;
		if (mod==0)
			printf ("%d, ", num);
	}
	system ("pause");
	return 0;
}

