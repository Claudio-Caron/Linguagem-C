#include <stdio.h>
#include <stdlib.h>

/* 12. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de 
dias. Faça um programa para converter este tempo em anos, meses e dias.
Assuma que cada mês possua sempre 30 dias.*/

int main(int argc, char *argv[]) {
	 int t, ano, mes, dias;
	printf ("\n insira o tempo trabalhado em dias \n ");
	scanf ("%d", &t);
	ano = t / 365;
	printf ("\n estamos ha: %d anos, \n", ano );
	mes = t %365 /30;
	printf ("\n %d meses \n", mes);
	dias = (t % 365) % 30;
	printf ("\n e %d dias sem acidentes", dias);
	
	 
	return 0;
}
