#include <stdio.h>
#include <stdlib.h>

/* 3. A sequência de Fibonacci é uma sequência de números, tal que o número 
1 é o primeiro e também o segundo termo da ordem, e os demais são 
originados pela soma de seus antecessores. Exemplo: 1, 1, 2, 3, 5, 8, 13, 21, 
34, 55, 89, 144, ...
Faça uma solução para imprimir os n primeiros termos da Série de 
Fibonacci, tal que o usuário defina o valor para n */

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
