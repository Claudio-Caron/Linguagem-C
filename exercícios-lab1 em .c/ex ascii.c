#include <stdio.h>
#include <stdlib.h>

/* 4. Faça um algoritmo/programa em C que verifique se um caractere digitado é numérico 
(0 a 9) e, caso contrário, se é uma vogal ou uma consoante, ou outro caractere
qualquer.*/

int main(int argc, char *argv[]) {
	char asc;
	printf ("\n digite o caracter\n");
	scanf ("%c", &asc);
	if (asc>=48 && asc<=57) 
		printf ("o caractere e um numero");
	else
		if (asc==97 || asc==101 || asc==105 || asc==111 || asc==117 || asc==65 || asc==69 || asc==73 || asc==79 || asc==85 ) 
			printf ("o caracter e vogal");
		
	
	
	return 0;
}
