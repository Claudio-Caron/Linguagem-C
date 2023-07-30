#include <stdio.h>
#include <stdlib.h>

/* 21. O usuário informa a idade de dois homens e a idade de duas mulheres. O 
sistema imprime duas mensagens com os valores:
homem mais velho + mulher mais velha = resultado
homem mais novo + mulher mais nova = resultado
Assim, o sistema deverá verificar a menor e a maior dentre as idades antes 
de calcular as somas.*/

int main(int argc, char *argv[]) {
	int idh1, idh2, idm1, idm2;
	int hn, hv, mn, mv;
	 int r1, r2;
	printf ("\n insira a idade do primeiro homem\n");
	scanf ("%d", &idh1);
	printf ("\n insira a idade do segundo homem\n");
	scanf ("%d", &idh2);
	printf ("\n insira a idade da primeira mulher\n");
	scanf ("%d", &idm1);
	printf ("\n insira a idade da segunda mulher \n");
	scanf ("%d", &idm2);
	if (idh1>idh2) {
		idh1 = hv;
		idh2 = hn;
	}
	else {
		idh1 = hn;
		idh2 = hv;
	}			
		
		if (idm1>idm2){
			idm1 = mv;
			idm2 = mn;
		}
		else  {
			idm1 = mn;
			idm2 = mv;
		}
		
			
	
	r1 =hv + mv;
	r2 =hn +mn;
	printf ("\n a soma das idades do homem e mulheres mais velhos e : %d \n", r1);
	printf ("\n a soma das idades do homem e mulheres mais novos e : %d \n", r2);
	
	
	return 0;
}
