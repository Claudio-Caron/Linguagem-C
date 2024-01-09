#include <stdio.h>
#include <stdlib.h>


/*26. Imprima os 10 primeiros termos da série de Fibonacci. Os dois primeiros termos da 
série são 1 e 1 e cada termo seguinte é gerado a partir da soma dos dois anteriores. 
Exemplo: o terceiro termo é 2 (1 +1) e o quarto é 3 (1 +2). */

int main(int argc, char *argv[]) {
	int num, i, fib1=1, fib2=1;
	printf ("os dez primeiros números da sequência de Fibonacci são \n%d, %d, ", fib1, fib2);
	for (i=3; i<=10; i++){
	num=fib1+fib2;
	printf ("%d, ", num);
	fib1=fib2;
	fib2=num;
	}	
	system ("pause");
	return 0;
}
