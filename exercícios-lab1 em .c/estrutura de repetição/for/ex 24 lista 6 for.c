#include <stdio.h>
#include <stdlib.h>

/* 24. Dado o sexo e altura de 5 pessoas, calcular e exibir a maior altura, a média das alturas 
femininas, o total de homens.
 */

int main(int argc, char *argv[]) {
	int sexo, alt1, alt2=0, tothom, i;
	int homem=0, mulher=0, maior=1;
	float mediaaltfem=0;
	for (i=1; i<=5; i++){
		printf("para sexo masculino, digite 1, para feminino, 2\n");
		scanf ("%d", &sexo);
		printf ("digite a altura em cm\n");
		scanf ("%d", &alt1);
		if (alt1>alt2){
			alt2=alt1;
			maior=alt2;
		}else{
			maior=alt2;
		}
		if (sexo==1){
			homem++;
		}else{
			mediaaltfem=mediaaltfem+alt1;
			mulher++;
		}
	}
	printf ("a maior altura digitada foi %d\n", maior);
	printf ("a media das alturas femininas foi %.2f\n", mediaaltfem/mulher);
	printf ("no questionaio, de 5 pessoas, %d foram homens\n\n", homem);
	
	system ("pause");
	return 0;
}
