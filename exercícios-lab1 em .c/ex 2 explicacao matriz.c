#include <stdio.h>
#include <stdlib.h>
/*2. Faça uma solução para guardar valores numéricos em uma matriz de
tamanho NxM
Em seguida, leia os elementos da matriz e imprima o menor e o maior
valor dessa matriz, bem como a respectiva posição onde se encontram tais
elementos*/
int main (){
    int i, j, maior, menor, posiçao, matriz[3][3];
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf ("insira o valor da linha %i coluna %i", i, j);
            scanf ("%i", &matriz [i][j]);
        }
    }

    system ("pause");
    return 0;
}
