/*2. Opera��es sobre vetor. Declare, na regi�o global, um vetor de inteiros de
5 posi��es.
O usu�rio deve informar uma das seguintes op��es:
1. Inserir 2. Imprimir 3. Sair.
Exiba este menu enquanto a op��o for diferente de 3.
Ambas op��es, 2 e 3, devem imprimir os elementos do vetor.
Fa�a uso de la�o do-while e de switch-case.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int  vetor [5] = {0, 0, 0, 0, 0};
void op1();
void op2();
void op3();
void escolha(int x);

int main(){
    int op, cont=0;
    setlocale (LC_ALL, "Portuguese");
    do {
    cont++;
    if (cont==1){
        puts ("Valor inicial do Vetor:");
        op2();
    }
    printf ("1-Inserir dados no vetor\n2-Imprimir o Vetor\n3-Sair\n");
    puts (" Qual das tr�s op��es deseja escolher?");
    scanf ("%i", &op);
    escolha(op);
    if (op>3 || op<=0){
        system ("cls");
        printf ("INSIRA SOMENTE UMA DAS ALTERNATIVAS SOLICITADAS!!!\n");
        continue;
    }
    system ("cls");
    }while (op!=3);
    system ("pause");
    return 0;
}
void op1(){
    int i;
    for (i=0; i<5; i++){
        printf ("insira o valor %i do vetor: \n", i+1);
        scanf ("%d", &vetor[i]);
    }
    printf ("\n");
}
void op2(){
    int i;
    for (i=0; i<5; i++){
        if (i==0)
            printf ("| ");
        printf (" %d| ", vetor[i]);
    }
    printf ("\n");
}
/*void op3(){
    break;
}*/
void escolha(int x){
    switch (x){
        case 1:
            op1();
            break;
        case 2:
            op2();
            break;
        case 3:
            printf ("op��o 3 escolhida! programa encerrado");
            op2();
            break;

    }
}

