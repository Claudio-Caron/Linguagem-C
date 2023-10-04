#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void imprimir(int mirrorT[], int mirrorsize){
    int i;
    printf ("|");
    for (i=0;i<mirrorsize; i++){
        printf ("%d|", mirrorT[i]);
    }
    printf ("\n\t\tchamando ordenação de estudantes");
    ordena();
}
void Ler(int T[], int tam){
    int i;
    for (i=0; i<tam; i++){
        printf ("\t\tInsira o número do acadêmico %d :\n", i+1);
        scanf (" %d", &T[i]);
        system ("cls");
    }
    printf ("\n\t\tChamando imprimir\n");
    imprimir(T,tam);
}

int main (void){

    system ("pause");
    return 0;
}

