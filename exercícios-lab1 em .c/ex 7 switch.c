#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 7. Criar um algoritmo para ler as letras iniciais de um estado civil e o sexo da pessoa e 
mostrar a descrição: casado(a), solteiro(a), viúvo(a), divorciado(a), inválido.
 */

int main(int argc, char *argv[]) {
	char inicial;
	printf ("\nInsira a inicial do seu estado civil atual\n");
	scanf ("%s", &inicial);
	switch (inicial)
	{
		case 'c':
			printf ("\nESTADO CIVIL:casado(a)\n");
		break;
		case 's':
			printf ("\nESTADO CIVIL:solteiro(a)\n");
		break;
		case 'v':
			printf ("\nESTADO CIVIL:viuvo(a)\n");
		break;
		case 'd':
			printf ("\nESTADO CIVIL:divorciado(a)\n");
		break;
		default :
			printf("inicial invalida\n");
		break;
		
	}
	
	system ("pause");
	return 0;
}
