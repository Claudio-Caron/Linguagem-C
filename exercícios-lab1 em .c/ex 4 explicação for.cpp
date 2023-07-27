#include <stdio.h>
#include <stdlib.h>
 int main (){
	int num, fat=1, i;
	printf ("digite o numero para saber seu respextivo fatorial\n");
	scanf ("%d", &num);
	for (i=num; i>1; i--){
		fat=fat*i;
	}
	printf ("%d!=%d\n\n", num, fat);	
 	system ("pause");
 	return 0;
 }
