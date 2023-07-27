#include <stdio.h>
#include <stdlib.h>

/*55. Leia 5 valores inteiros e positivos e:
a) encontre o maior valor;
b) encontre o menor valor;
c) calcule a média dos números lidos. */

int main(int argc, char *argv[]) {
	int valor=0, maior, menor, i, apoio;
	float media=0, vezes=0;
	for (i=5; i>=1; i--){
	printf ("digite um valor\nRESTAM %d VALORES A SEREM DIGITADOS\n", i);
	scanf ("%d", &valor);
	media=media+valor;
	vezes++;
	if (i==5){
		apoio=valor;
	}
	if (apoio>=valor){
		maior=apoio;
		menor=valor;
	}
	else {
		maior=valor;
		menor=apoio;
	}
	}
	vezes=media/vezes;
	printf ("maior digitado foi %d\n", maior);
	printf ("o menor digitado foi %d\n", menor);
	printf ("a media dos valores digitados foi %.2f\n", vezes);
	system ("pause");
	return 0;
}
