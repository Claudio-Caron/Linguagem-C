/*Tarefa 1: Faça uma solução para o usuário informar dois números do tipo 
float e mostrar o resultado de todas as operações aritméticas sobre eles. 
Use passagem de parâmetro por valor*/
#include <stdio.h>
#include <stdlib.h>
void operacoes (float x, float y);
int main (){
    float a, b;
    printf ("Insira dois numeros para realizar as quatro operacoes basicas na respectiva ordem de calculo:\n");
    scanf ("%f %f", &a, &b);
    operacoes (a, b);
    system ("pause");
    return 0;
}
void operacoes (float x, float y){
    printf ("%.2f + %.2f = %.2f\n", x, y, x+y);
    printf ("%.2f - %.2f = %.2f\n", x, y, x-y);
    printf ("%.2f X %.2f = %.2f\n", x, y, x*y);
    printf ("%.2f : %.2f = %.2f\n", x, y, x/y);
}
