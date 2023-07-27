#include <stdio.h>
#include <stdlib.h>

/*20. Leia vários números inteiros positivos e apresente a soma dos números pares. O fim da 
leitura será indicado pelo número 0.
 */

int main(int argc, char *argv[]) {
	int num, soma=0, mod;
	do { 
	printf ("DIGITE UM NUMERO!\n (Para encerrar, digite 0)\n");
	scanf ("%d", &num);
	mod=num%2;
	if (mod==0){
		soma=soma+num;
	}		
	}while (num!=0);
	printf ("a soma dos pares e: %d\n", soma);
	system ("pause");
	return 0;
}
