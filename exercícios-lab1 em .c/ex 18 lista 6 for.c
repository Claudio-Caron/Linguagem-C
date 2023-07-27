#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 18. Leia o nome, a idade e o sexo de 20 pessoas. Escreva o nome se a pessoa for do sexo 
masculino e tiver mais de 21 anos */

int main(int argc, char *argv[]) {
	int id, i, sexo;
	char nome [15]; 
	for (i=20; i>0; i--){
		printf ("digite seu nome:\n");
		scanf ("%s", &nome);
		printf ("digite a idade:\n");
		scanf ("%d", &id);
		printf ("qual seu sexo?para masculino, digite 1, para feminino, 2\n");
		scanf ("%d", &sexo);
		if (sexo==1 && id>=21)
			printf ("seu nome e %s\n", nome);
		printf ("\n");
	}
	system ("pause");
	return 0;
}
