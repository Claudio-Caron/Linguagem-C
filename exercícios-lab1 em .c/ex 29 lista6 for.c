#include <stdio.h>
#include <stdlib.h>

/*29. Imprima todos os números inteiros positivos no intervalo aberto entre 10 e 100 de 
modo que:
? não terminem em zero
? se o dígito da direita for removido, o número restante é divisor do número original.
Exemplo: 26: 2 é divisor de 26
88: 8 é divisor de 88 */

int main(int argc, char *argv[]) {
	int num, i, mod1;
	for (i=100; i>=10; i--){
		mod1=i%10;
		if (mod1==0){
			continue;
		}
		mod1=i%mod1;
		if (mod1==0){
			continue;
		}
		printf ("%d, ", i);
		mod1=0;
	}
	
	
	system ("pause");
	return 0;
}
