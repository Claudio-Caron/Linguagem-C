#include <stdio.h>
#include <stdlib.h>

/* 23. Leia um número inteiro n da entrada. Em seguida, ler n números da entrada e imprimir 
o maior deles */

int main(int argc, char *argv[]) {
	int num, maior, ent1, ent2=0, i;
	printf ("escolha a quantidade de vezes para repetir a pergunta\n");
	scanf ("%d", &num);
	for (i=num; i>=1; i--){
		printf ("digite o numero para saber o maior dos digitados\n");
		scanf("%d", &ent1);
		if (ent1>ent2){
			ent2=ent1;
			maior=ent2;
		}
		else {
			maior=ent2;
		}
		
		
	}
	printf ("voce digitou %d numeros, o maior deles foi %d\n\n", num, maior);
	system ("pause");
	return 0;
}
