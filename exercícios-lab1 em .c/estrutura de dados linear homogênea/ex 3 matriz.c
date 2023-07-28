#include <stdio.h>
#include <stdlib.h>
 /* 3. Faça uma solução para guardar valores numéricos em uma matriz A 
quadrada de tamanho N. Em seguida, guarde em B a matriz transposta de A*/
int main()
{
    int matrizA [3][3], matrizB[3][3], i, j, x=3;
        for (i=0; i<x; i++){
            for (j=0; j<x; j++){
                printf ("insira o valor da matriz linha %i coluna %i:\n", i, j);
                scanf ("%d", &matrizA[i][j]);
            }
        }
        printf ("A matriz digitada trasposta e:\n");
        for (i=0; i<x; i++){
            for (j=0; j<x; j++){
                matrizB[i][j]=matrizA[j][i];
                printf ("%d  ",  matrizB[i][j]);
            }
            printf ("\n");
        }
        printf ("\n");
    system ("pause");
    return 0;
}
