/*3.Fa�a uma solu��o usando modularidade para automatizar um sistema
banc�rio de um caixa eletr�nico. O menu a seguir deve ser exibido ao
usu�rio enquanto a op��o informada por ele seja diferente de SAIR:
1.SALDO 2.SAQUE 3.PAGAMENTO 4.DEPOSITO 0.SAIR
Para cada op��o, mostre o saldo no in�cio, e informe ao usu�rio se a
opera��o escolhida foi realizada com sucesso ou n�o.
Considere saldo inicial igual $1500*/
/*O sistema deve ser consistente: n�o permitir saque sem ter saldo; n�o permitir sacar,
depositar ou pagar valor menor ou igual a zero...
Teste cada m�dulo antes de definir todos eles*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// um modulo para cada op��o, de maneira an�loga ao exerc�cio anterior(um switch com fun��es em cada caso).
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
    puts ("*SISTEMA DE CAIXA ELETR�NICO*");
    puts ("Qual op��o deseja realizar?");
    printf ("1.SALDO\n2.SAQUE\n3.PAGAMENTO\n4.DEPOSITO\n0.SAIR\n");
    scanf ("%d", &a);
    system ("cls");
    printf ("Opc�o escolhida :%d\n", a);
    if (a>4 || a<0){
        printf ("Escolha somente uma das op��es dispon�veis!!!\n");
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
        printf ("O valor inserido excede seu saldo atual, n�o � poss�vel realizar o pagamento\n");
        men2 ();
    }
}
void c4(){
    float y;
    c1();
    puts ("4-DEP�SITO");
    do{
    puts ("insira o valor para dep�sito:");
    puts ("(para cancelar a opera��o, digite 0)");
    scanf ("%f", &y);
    if (y<0)
        puts ("Insira um valor v�lido para dep�sito");
    }while (y<0);
    saldo +=y;
    if (y>0){
        men1();
    }else{
        men2();
    }

}

void men1(){
        puts ("Opera��o realizada com sucesso!\n");
}
void men2(){
        printf ("Opera��o n�o realizada, seu saldo atual � de : RS %.2f\n", saldo);
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

