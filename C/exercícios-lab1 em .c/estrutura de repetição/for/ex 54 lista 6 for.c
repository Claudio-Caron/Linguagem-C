#include <stdio.h>
#include <stdlib.h>

/* 54. Considerando o intervalo de números de 1000 a 1999, escreva aqueles que divididos 
por 11 dão resto igual a 5 */

int main(int argc, char *argv[]) {
	int num, mod, i;
	printf ("os divisores entre 1000 e 1999 que posssuem resto 5, sao:\n");
	for (num=1000; num<=1999; num++){
		mod=num%11;
		if (mod==5){
			printf ("%d, ", num);
		}
		
	}
	system ("pause");
	return 0;
}
