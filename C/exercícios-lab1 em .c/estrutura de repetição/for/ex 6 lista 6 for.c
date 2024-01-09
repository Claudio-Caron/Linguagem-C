#include <stdio.h>
#include <stdlib.h>

/* 6. Apresente todos os valores numéricos inteiros ímpares situados na faixa de 0 a 20 */

int main(int argc, char *argv[]) {
	int impar;
	for (impar=2;impar>=2 && impar<=20;impar=impar+2)
		printf ("os numeros primos entre 0 e 20 sao:%d\n", impar);
	
	system ("pause");
	return 0;
	
}
