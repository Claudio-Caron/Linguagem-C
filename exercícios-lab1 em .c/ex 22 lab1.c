#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int a, b, c;
	float d, x1, x2;
	printf ("digite os valores de A, B e C, resoectivamente");
	scanf ("%d %d %d", &a, &b, &c);
	if (a!>0)  {
		d=(b^2) - 4*a*c;
		if (d>=0) {
			d=d^0.5;
			x1= (-1*b)+d/(2*a);
			x2= (-1*b)-d/(2*a);
		else 
			printf ("nao existem raizes reais");
		}
	else ("nao e equacao do segundo grau");
	}
	return 0;
}
