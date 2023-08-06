/*3.Faça uma solução usando modularidade para automatizar um sistema 
bancário de um caixa eletrônico. O menu a seguir deve ser exibido ao 
usuário enquanto a opção informada por ele seja diferente de SAIR: 
1.SALDO 2.SAQUE 3.PAGAMENTO 4.DEPOSITO 0.SAIR
Para cada opção, mostre o saldo no início, e informe ao usuário se a 
operação escolhida foi realizada com sucesso ou não.
Considere saldo inicial igual $1500*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
// um modulo para cada opção, de maneira análoga ao exercício anterior(um switch com funções em cada caso). 
float saldo=1500;
void c1();
void c2();
void c3();
void mens();
void escolha(int x);
int main (){
    int a;
    setlocale (LC_ALL, "Portuguese");
    do{
    puts ("*SISTEMA ELETRONICO*");
    puts ("Qual opção deseja realizar?");
    printf ("1.SALDO\n2.SAQUE\n3.PAGAMENTO\n4.DEPOSITO\n0.SAIR\n");
    scanf ("%i", &a);
    printf ("Opcão escolhida :%i\n", a);
    if ("a>4 || a<0"){
        printf ("Escolha somente uma das opções disponíveis!!!\n");
        continue;
    }
    escolha (a);
    }while (a!=0);
}
void c1(){
    printf ("Saldo atual : %.2f\n", saldo);
}
void c2(){
    int y;
    do{
    puts ("Qual valor deseja sacar?");
    scanf ("%f", &y);
    if (y<=saldo){
        saldo -=y;
    }else{
        printf ("O valor inserido excede seu saldo atual, digite um valor novamente, de modo que seja inferior ao seu saldo atual, para ser possível efetuar o saque\n");
    }
    c1();
    }while (y>saldo);
}
void c3(){
    int y;
    puts ("Insira o valor da conta que deseja pagar");
    scanf ("%f", &y);
    if (y<=saldo){
        saldo -=y;
    }else{
        printf ("O valor inserido excede seu saldo atual, não é possível realizar o pagamento\n");
    }
    c1();
}

void mens(){
    if (saldo>0)
        puts ("Operação realizada com sucesso!\n");
    else 
        printf ("Operação não realizada, seu saldo atual é de : RS %.2f", saldo);
}
void escolha (int x){
    switch (x){
        case 1:
            c1();
            break;
        case 2:
            c2(saldo);
    }
}

