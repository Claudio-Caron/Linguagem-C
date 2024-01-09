#include <stdio.h>
#include <stdlib.h>
/*1. Faça uma solução para inicializar uma matriz quadrada de tamanho 3,
automaticamente, tal que o elemento a posição (i,j) seja 2*i+j. Em
seguida, o usuário poderá escolher uma das seguintes operações:
Use a estrutura switch-case para a seleção da opção
7
A) imprimir todos os elementos da matriz
B) somar os elementos de cada linha e mostrar o resultado
C) somar os elementos de cada coluna e mostrar o resultado
D) imprimir os elementos da diagonal principal
E) imprimir todos os elementos, exceto os da diagonal principal
F) imprimir os elementos, tal que a linha é par e a coluna é ímpar
G) imprimir os elementos da coluna 0, apenas*/

int main (){
    int matriz [3][3], i, j, opcao, soma=0;
        printf (" ___________");
        for(i=0; i<3; i++){
            printf ("\n");
            printf ("|");
            for (j=0; j<3; j++){
                matriz[i][j]=2*i+j;
                printf (" %d |", matriz[i][j]);
            }
        }
    printf ("\n");
    printf (" -----------");
    printf ("\n");
    do {
        printf ("----------------------------------------------------------------\n");
        printf ("escolha uma das opcoes abaixo\n\n 1-imprimir todos os elementos da matriz\n 2-somar os elementos de cada linha e mostrar o resultado\n ");
        printf ("3-somar os elementos de cada coluna e mostrar o resultado\n 4-imprimir os elementos da diagonal principal\n 5-imprimir todos os elementos, exceto os da diagonal principal\n ");
        printf ("6-imprimir os elementos, tal que a linha é par e a coluna é ímpar\n 7-imprimir os elementos da coluna 0, apenas\n 0-ENCERRAR\n");
        scanf ("%d", &opcao);
        switch (opcao) {
        case 1:
            printf ("----------opcao 1----------\nimprimir todos os elementos da matriz\n");
            for(i=0; i<3; i++){
                printf ("\n");
            for (j=0; j<3; j++)
                printf (" %d ", matriz[i][j]);
            printf ("\n ");
            }
            break;
        case 2:
            printf ("----------opcao 2----------\n Somar os elementos de cada linha e mostrar o resultado\n");
            for (i=0; i<3; i++){
                for (j=0; j<3; j++){
                    soma+=matriz[i][j];
                }
                printf ("%d\n", soma);
                soma=0;
            }
            break;
        case 3:
            printf ("----------opcao 3----------\nsomar os elementos de cada coluna e mostrar o resultado\n");
            for (i=0; i<3; i++){
                for (j=0; j<3; j++){
                    soma+=matriz[j][i];
                }
                printf ("%d, ", soma);
            }
            printf ("\n");
            break;
        case 4:
            printf ("----------opcao 4----------\nimprimir os elementos da diagonal principal\n");
            for (i=0; i<3; i++){
                printf ("%d, ", matriz[i][i]);
            }
            printf ("\n");
            break;
        
        case 6:
            printf ("----------opcao 5----------\nimprimir todos os elementos, exceto os da diagonal principal\n");
        }

    }while (opcao!=0);


    system ("pause");
    return 0;
}