#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* 11. Leia 4 números e escreva o cubo e a raiz cúbica de cada número.*/

int main(int argc, char *argv[]) {
	int cont;
	float num;
	for (cont=4; cont <=4 && cont>=1; cont--){
		printf ("digite um numero para verificar seu cubo e sua raiz cubica\n");
		scanf ("%f", &num);
		printf (" o cubo de %.2f e : %.2f\n", num, pow(num,3));
		printf ("a raiz cubica de %.2f e : %.2f\n", num, (sqrt(num))*num);
	}
	system ("pause");
	return 0;
}
