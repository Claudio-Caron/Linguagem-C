#include <stdio.h>
#include <stdlib.h>


/*26. Imprima os 10 primeiros termos da s�rie de Fibonacci. Os dois primeiros termos da 
s�rie s�o 1 e 1 e cada termo seguinte � gerado a partir da soma dos dois anteriores. 
Exemplo: o terceiro termo � 2 (1 +1) e o quarto � 3 (1 +2). */

int main(int argc, char *argv[]) {
	int num, i, fib1=1, fib2=1;
	printf ("os dez primeiros n�meros da sequ�ncia de Fibonacci s�o \n%d, %d, ", fib1, fib2);
	for (i=3; i<=10; i++){
	num=fib1+fib2;
	printf ("%d, ", num);
	fib1=fib2;
	fib2=num;
	}	
	system ("pause");
	return 0;
}
