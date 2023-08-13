#include <stdio.h>
#include <stdlib.h>
/*1. Faça uma solução para receber dois números, por passagem de 
parâmetro, tal que o módulo possibilite imprimir na main() tais valores em 
ordem crescente de valor. Utilize apenas variáveis locais*/
void receber(int *, int *);
int main (){
    int num1, num2;
    receber (num1,num2);
    
    system ("pause");
    return 0;
}
void receber (int *esp1, int *esp2){
    int *maior, *menor;
    printf ("insira o valor de dois numeros para checar qual é o maior\n");
    scanf ("%i %i", &esp1, &esp2);
    if (esp1>=esp2){
        *maior=&esp1;
        *menor=&esp2;
    }else {
        *menor=esp1;
        *maior=esp2;
    }
    
}