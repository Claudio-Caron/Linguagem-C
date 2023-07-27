#include <stdio.h>
#include <stdlib.h>

/* 3. A sequ�ncia de Fibonacci � uma sequ�ncia de n�meros, tal que o n�mero 
1 � o primeiro e tamb�m o segundo termo da ordem, e os demais s�o 
originados pela soma de seus antecessores. Exemplo: 1, 1, 2, 3, 5, 8, 13, 21, 
34, 55, 89, 144, ...
Fa�a uma solu��o para imprimir os n primeiros termos da S�rie de 
Fibonacci, tal que o usu�rio defina o valor para n */

int main(int argc, char *argv[]) {
	int num, cont, soma1=1, soma2=1, conta;
	printf ("insira o numero para a sequencia de Fibonacci\n");
	scanf ("%d", &num);
	printf ("\nresultado ; ");
	printf ("%d, %d, ", soma1, soma2);
	for (cont=3; cont<=num; cont++){
		conta=soma1+soma2;
		printf ("%d, ", conta);
		soma1=soma2;
		soma2=conta;
	}
	printf ("\n");
	system ("pause");
	return 0;
}
