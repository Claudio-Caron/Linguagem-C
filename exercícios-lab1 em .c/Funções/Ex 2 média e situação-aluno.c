#include <stdio.h>
#include <stdlib.h>
/*1.Faça uma solução para obter 2 notas de um aluno, realizar e exibir a 
média, e mostrar a situação do aluno (Aprovado para média >=6 ou 
Reprovado, caso contrário). Use modularidade*/
void media (float x, float y);
void mensagem(float t);
int main (){
    float a, b;
    do {
    puts ("insira a nota 1");
    scanf ("%f", &a);
    mensagem (a);
    }while (a<0 || a>10);
    do{
    puts ("insira a nota 2");
    scanf ("%f", &b);
    mensagem (b);
    }while (b<0 || b>10);
    media (a,b);
    system ("pause");
    return 0;
}
void media (float x, float y){
    float z;
    z= (x+y)/2;
    printf ("A media do aluno : %.2f\n", z);
    if (z>=6)
        puts ("Com essa nota, o aluno esta aprovado");
    else 
        puts ("Com essa nota, o aluno esta reprovado");
}
void mensagem (float t){
    if (t<0 || t>10)
        puts ("nota invalida! Insira um nota entre 0 e 10");
}
