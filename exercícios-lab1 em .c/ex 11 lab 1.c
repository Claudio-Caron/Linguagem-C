#include <stdio.h>
#include <stdlib.h>

/*11. Ler um n�mero inteiro de tr�s d�gitos e imprimir a sa�da da seguinte forma:
ALGORITMOS E ESTRUTURAS DE DADOS I
LABORAT�RIO DE PROGRAMA��O I
LISTA DE EXERC�CIOS
CENTENA: x
DEZENA: y
UNIDADE: z*/

int main(int argc, char *argv[]) {
	int x, y, z;
	int n;
	printf ("\n digite o valor para ser separado \n");
	scanf ("%d", &n);
	x= (n / 100);
	printf ("\n centena: %d \n", x);
	y= n % 100 /10;
	printf ("\n dezena %d \n", y );
	z = n % 100 %10 ;
	printf ("\n unidade %d \n", z);
	
	return 0;
}
