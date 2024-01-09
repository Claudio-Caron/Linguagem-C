#include <stdio.h>
#include <stdlib.h>

/* 15. Leia um número não determinado de valores e calcule a média aritmética dos valores 
lidos, a quantidade de valores positivos, a quantidade de valores negativos e o 
percentual de valores negativos e positivos. Mostre os resultados */

int main(int argc, char *argv[]) {
	int num, positivos=0, negativos=0;
	float media=0, porcent, apoio=0;
	do {
		printf ("digite o numero\n");
		scanf ("%d", &num);
		media++;
		apoio=apoio+num;
		if (num>0){
			positivos++;
		}if(num<0) {
			negativos++;
		}
		printf ("para encerrar, digite 1\n");
		scanf ("%d", &num);
	}while (num!=1);
	porcent=(100/media)*positivos;
	apoio=apoio/media;
	printf ("foram digitados %d numeros positivos\n", positivos);
	printf ("foram digitados %d numeros negativos\n", negativos);
	printf ("%.2f %% numeros positivos\n", porcent);
	porcent=(100/media)*negativos;
	printf ("%.2f %% numeros negativos\n", porcent);
	printf ("a media dos numeros digitados e:%.2f\n", apoio);
	
	
	system ("pause");
	return 0;
}
