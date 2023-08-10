/*3.Faça uma solução usando modularidade para automatizar um sistema
bancário de um caixa eletrônico. O menu a seguir deve ser exibido ao
usuário enquanto a opção informada por ele seja diferente de SAIR:
1.SALDO 2.SAQUE 3.PAGAMENTO 4.DEPOSITO 0.SAIR
Para cada opção, mostre o saldo no início, e informe ao usuário se a
operação escolhida foi realizada com sucesso ou não.
Considere saldo inicial igual $1500*/
/*O sistema deve ser consistente: não permitir saque sem ter saldo; não permitir sacar,
depositar ou pagar valor menor ou igual a zero...
Teste cada módulo antes de definir todos eles*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// um modulo para cada opção, de maneira análoga ao exercício anterior(um switch com funções em cada caso).
float saldo=1500;
void c1();
void c2();
void c3();
void c4();
void men1();
void men2();
void escolha(int x);
int main (){
    int a;
    setlocale (LC_ALL, "Portuguese");
    do{
    puts ("*SISTEMA DE CAIXA ELETRÔNICO*");
    puts ("Qual opção deseja realizar?");
    printf ("1.SALDO\n2.SAQUE\n3.PAGAMENTO\n4.DEPOSITO\n0.SAIR\n");
    scanf ("%d", &a);
    system ("cls");
    printf ("Opcão escolhida :%d\n", a);
    if (a>4 || a<0){
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
    float y;
    c1();
    puts ("2-SAQUE");
    puts ("Qual valor deseja sacar?");
    puts ("(para cancelar o saque, digite 0)");
    scanf ("%f", &y);
    if (y==0){
        men2();
    }
    while (y!=0){
    if (y<=saldo){
        saldo -=y;
        men1();
    }else{
        printf ("O valor inserido excede seu saldo atual, para efetuar o saque, digite um valor correspondente ao seu saldo atual;\n");
        men2();
    }
    y=0;
    }
}
void c3(){
    float y;
    c1();
    puts ("3-PAGAMENTO");
    puts ("Insira o valor da conta que deseja pagar");
    scanf ("%f", &y);
    if (y<=saldo){
        saldo -=y;
        men1();
    }else{
        printf ("O valor inserido excede seu saldo atual, não é possível realizar o pagamento\n");
        men2 ();
    }
}
void c4(){
    float y;
    c1();
    puts ("4-DEPÓSITO");
    do{
    puts ("insira o valor para depósito:");
    puts ("(para cancelar a operação, digite 0)");
    scanf ("%f", &y);
    if (y<0)
        puts ("Insira um valor válido para depósito");
    }while (y<0);
    saldo +=y;
    if (y>0){
        men1();
    }else{
        men2();
    }

}

void men1(){
        puts ("Operação realizada com sucesso!\n");
}
void men2(){
        printf ("Operação não realizada, seu saldo atual é de : RS %.2f\n", saldo);
}
void escolha (int x){
    switch (x){
        case 1:
            puts ("1-SALDO");
            men1();
            c1();
            break;
        case 2:
            c2();
            break;
        case 3:
            c3();
            break;
        case 4:
            c4();
            break;
    }
}

