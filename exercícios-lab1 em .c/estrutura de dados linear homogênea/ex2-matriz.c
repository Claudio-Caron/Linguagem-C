#include <stdio.h>
#include <stdlib.h>
/*2. Faça uma solução para guardar valores numéricos em uma matriz de
tamanho NxM
Em seguida, leia os elementos da matriz e imprima o menor e o maior
valor dessa matriz, bem como a respectiva posição onde se encontram tais
elementos*/
int main (){
    int i, j, matriz[3][3], menor, maior, posicaomaior [3][3], posicaomenor [3][3], cont=0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf ("insira o valor da linha %i coluna %i\n", i, j);
            scanf ("%i", &matriz [i][j]);
            if (cont==0){
                maior =matriz [i][j];
                menor =matriz [i][i];
                cont++;
            }else{
                if (matriz[i][j]>maior){
                    maior=matriz[i][j];
                }
                if (matriz[i][j]<menor){
                    menor=matriz[i][j];
                }
            }
        }
    }
    printf ("maior valor digitado na matriz: %i\n", maior);
    printf ("menor valor digitado na matriz: %i\n", menor);
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (matriz[i][j]==maior){
                printf ("o maior valor digitado se encontra na posicao (%i,%i)\n", i, j);
            }
            if (matriz[i][j]==menor){
                printf ("o menor valor digitado se encontra na posicao (%i,%i)\n", i, j);
            }
        }
    }
  /*  printf ("maior valor digitado na matriz: %i\n", maior);
    printf ("menor valor digitado na matriz: %i\n", menor);*/
    /*fazer a busca com base nos valores maiores e menores encontrados pelo próprio programa*/
    system ("pause");
    return 0;
}