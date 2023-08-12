#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*Faça uma solução, usando modularidade, para o sistema armazenar 10 inteiros 
em um vetor. O usuário poderá escolher, dentre as opções:
[D]uplicar: 
Todos os elementos do vetor são duplicados. Imprima-os, em seguida 
[I]mprimir:
Todos os elementos do vetor são impressos 
[R]emover: 
O último elemento do vetor deve ser removido. Imprima-os, em seguida
[S]air
Todos os elementos do vetor são impressos e o sistema é encerrado
Obs.: Todo vetor é passado por referência. Logo, qualquer modificação nesta 
estrutura dentro de um módulo não requer o seu retorno.
Para esta tarefa, declare o vetor na função main()*/
//void armvetor(int *);
void imprimir (int *);
void armvetor (int *);
int main (){
    char a;
    int vet[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //int *pvet;
    //int pvet=&vet[10];
    do {
        printf ("Escolha uma opcao\n[D]uplicar\n[I]mprimir\n[R]emover\n[S]air\n");
        scanf ("%c", &a);
        a = toupper (a);
        switch (a) {
            case 'D':
                printf ("opcao escolhida: DUPLICAR");
                //
                break;
            case 'I':
                printf ("opcao escolhida: IMPRIMIR\n");
                imprimir(vet);
                break;
            case 'R':
                printf ("opcao escolhida: REMOVER");
                //
                break;
            case 'S':
                printf ("opcao escolhida: SAIR\n");
                imprimir(vet);
                break;
        }
    }while(a!='S');

    system ("pause");
    return 0;
}
void armvetor(int *pvet){
    int i;
    for (i=0; i<10; i++){
        printf ("insira o valor da posicao %i do vetor\n", i+1);
        scanf ("%i", &pvet[i]);
        pvet[i]= pvet[i] * 2;
    }
    imprimir (pvet);
}
void imprimir(int *pvet){
    int i;
    printf ("Vetor: \n");
    for(i=0; i<10; i++){
        printf ("%i ", pvet[i]);
    }
    printf ("\n");
}
void escolha (){
    printf ("Escolha uma opcao\n[D]uplicar\n[I]mprimir\n[R]emover\n[S]air\n");
    scanf ("%c", &a);
    toupper ('a');
    switch (a) {
        case 1:
            //
            break;
        case 2:
            imprimir()

    }
}