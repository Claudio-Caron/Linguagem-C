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
void imprimir (int *);
void duplicar(int *);
void remover (int *, int contesp);
int main (){
    char a;
    int vet[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, cont=10;
    do {
        printf ("\t\t\t\t\t___________________\n");
        printf ("\t\t\t\t\t|Escolha uma opcao|\n\t\t\t\t\t|-----------------|\n\t\t\t\t\t|[D]uplicar       |\n\t\t\t\t\t|-----------------|\n\t\t\t\t\t");
        printf ("|[I]mprimir       |\n\t\t\t\t\t|-----------------|\n\t\t\t\t\t|[R]emover        |\n\t\t\t\t\t|-----------------|\n\t\t\t\t\t|[S]air           |\n");
        printf ("\t\t\t\t\t|-----------------|\n\t\t\t\t\t\t");
        scanf ("%c", &a);
        while (getchar() != '\n');
        a = toupper (a);
        system ("cls");
        switch (a) {
            case 'D':
                //system ("cls");
                printf ("\t\t\topcao escolhida: DUPLICAR\n");
                duplicar (vet);
                break;
            case 'I':
                //system ("cls");
                printf ("\t\t\topcao escolhida: IMPRIMIR\n");
                imprimir(vet);
                break;
            case 'R':
                //system ("cls");
                printf ("\t\t\topcao escolhida: REMOVER\n");
                cont--;
                remover (vet,cont);//tentar usar o cont dentro da chave
                break;
            case 'S':
                //system ("cls");
                printf ("\t\t\topcao escolhida: SAIR\n");
                imprimir(vet);
                break;
            default :
                system ("cls");
                printf ("\n\t\t\tDigite apenas uma das letras inicias de comando\n");
                //system ("cls");
                break;
        }
    }while(a!='S');

    system ("pause");
    return 0;
}
void imprimir(int *pvet){
    int i;
    printf ("Vetor: \n");
    for(i=0; i<10; i++){
        printf ("%i ", pvet[i]);
    }
    printf ("\n");
}
void duplicar(int *pvet){
    int i;
    for (i=0; i<10; i++){
        pvet[i]= pvet[i] * 2;
    }
    imprimir (pvet);
}
void remover (int *pvet, int contesp){
    pvet[contesp]=0;
    imprimir (pvet);
}

/*void escolha (){
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
}*/