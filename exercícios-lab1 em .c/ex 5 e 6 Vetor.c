#include <stdio.h>
#include <stdlib.h>
/*5. Insira elementos em um vetor de inteiros e pe�a ao usu�rio informar um
n�mero a ser procurado nessa estrutura. Se encontrar, mostre o n�mero e
o �ndice onde o mesmo se encontra
6. Adicionalmente ao exerc�cio anterior, remova o elemento da estrutura,
fazendo a sobreposi��o de elementos*/
int main (){
    int vetor[5]= {3, 5, 7, 1, 8}, i, n, a;
        printf ("insira o numero a ser procurado\n");
        scanf ("%d", &n);
        printf ("o valor digitado se encontra na posicao:\n");
        for (i=0; i<5; i++){
            if (n==vetor[i]){
                printf ("%d \n", i);
                printf ("o restante que sobrou apos a posicao buscada\n");
                for (a=i; a<5; a++)

                    printf ("%d, ", vetor[a+1]);
            }
            break;
        }



    system ("pause");
    return 0;
}
