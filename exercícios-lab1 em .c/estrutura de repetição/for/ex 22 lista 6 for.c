#include <stdio.h>
#include <stdlib.h>

/*22. Leia um número inteiro n da entrada. Em seguida, ler n números da entrada e imprimir 
o triplo de cada um. */

int main(int argc, char *argv[]) {
	int n, i, ent, tri;
	printf ("digite o numero\n");
	scanf ("%d", &n);
	for (i=n; i>0; i--){
		printf ("digite o numero para mostrar o triplo\n");
		scanf ("%d", &ent);
		tri=ent*3;
		printf ("o triplo de %d e : %d\n", ent, tri);
	}
	
	
	system ("pause");
	return 0;
}
