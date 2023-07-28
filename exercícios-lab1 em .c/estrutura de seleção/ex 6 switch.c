#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 6. Criar um algoritmo para ler o preço e a categoria de um produto. Calcular e mostrar o 
reajuste de acordo com a categoria. Se for: A = 50%, B = 25% , C=15 % e outras 5%. */

int main(int argc, char *argv[]) {
	float p;
	char c;
	printf ("qual o valor do produto?\n");
	scanf ("%f", &p);
	printf ("qual e a categoria do produto?\n");
	scanf ("%s", &c);
	switch (c)
	{
		case 65:
		printf ("\no preco final do produto e:%.2f\n", p=p+(p*0.5));
		break;
		case 97:
		printf ("\no preco final do produto e:%.2f\n", p=p+(p*0.5));
		break;
		case 66:
		printf ("\no preco final do produto e:%.2f\n", p=p+(p*0.25));
		break;
		case 98:
		printf ("\no preco final do produto e:%.2f\n", p=p+(p*0.25));
		break;
		case 67:
		printf ("\no preco final do produto e:%.2f\n", p=p+(p*0.15));
		break;
		case 99:
		printf ("\no preco final do produto e:%.2f\n", p=p+(p*0.15));
		break;
		default: 
		printf ("\no preco final do produto e:%.2f\n", p=p+(p*0.05));
		break;
	}
	
	system ("pause");
	return 0;
}
