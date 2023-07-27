#include <stdlib.h>
#include <math.h>
/* 5. Apresente os quadrados dos números inteiros existentes na faixa de valores de 15 a 
200.*/
int main (){
	int cont;
	for (cont=15; cont>=15 && cont<=200; cont++) 
		printf ("quadrado de %d e : %d", cont,pow(cont,2));
	
	
	
	return 0;
}
