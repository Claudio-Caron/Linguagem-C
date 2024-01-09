#include <stdio.h>
#include <stdlib.h>

/*7. Apresente todos os números pares no intervalo de 600 a 1 */

int main(int argc, char *argv[]) {
	int num;
	printf ("os numeros pares de 600 a 0 sao\n");
	for (num=600 ;num>=1 && num<=600; num=num-2)
			printf ("%d, ", num);
	
	system ("pause");
	return 0;
}
