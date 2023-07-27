#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int maior, i;
	float v[3], media;
	for (i=0 ; i<3; i++){
	do {
		printf ("insira a nota do aluno\n");
		scanf ("%f", &v[i]);
	}while (v[i]<0 || v[i]>10);
		media=media+v[i];
	}
	media=media/3;
	printf ("media total %f\n", media);
	printf ("notas maiores que a media\n");
	for (i=0; i<3; i++){
		if (v[i]>media){
			printf ("\n", v[i]);
		}
	}
	system ("pause");
	return 0;
}

