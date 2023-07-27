#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num, contador=0;
	float media1, media2=0;
	do {
		printf ("\ndigite seu numero\n");
		scanf ("%d", &num);
		contador++;
		media2 = media2 +num;
		media1= media2/dig;
		printf ("\nforam digitados %d numeros, a media entre eles e %.2f\n", contador, media1);
		
		
			if (num<=0) 
				printf ("\no numero digitado nao e positivo\n");
			
	}while (num>0);
	
	system ("pause");
	return 0;
}
