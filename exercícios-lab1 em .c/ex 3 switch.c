#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*3. Fa�a um algoritmo/programa em C que simule uma calculadora com as quatro 
opera��es b�sicas (adi��o, subtra��o, multiplica��o e divis�o). Deve ser solicitado ao 
usu�rio a entrada dos dois operandos e da opera��o a ser executada, na forma de um 
menu. Dependendo da opera��o escolhida, deve ser executada a opera��o solicitada e 
ser esccrito o seu resultado. */

int main(int argc, char *argv[]) {
	char op;
	int v1, v2;
	float r;
	printf ("\ndigite os valores a serem operados em ordem do calculo\n");
	scanf ("%d %d", &v1, &v2);
	printf ("\nescolha um dos quatro operados basicos\n");
	scanf ("%s", &op);
	switch (op)
	{
		case 45:
		r=v1-v2;
		printf("o resultado e:%.2f\n", r);
		break;
		case 43:
		r=v1+v2;
		printf("o resultado e:%.2f\n", r);
		break;
		case 47:
		r=v1/v2;
		printf("o resultado e:%.2f\n", r);
		break;
		case 42:
		r=v1*v2;
		printf("o resultado e:%.2f\n", r);
		break;
		default :
		printf ("operacao invalida\n");
	}
	system ("pause");
	return 0;
}
