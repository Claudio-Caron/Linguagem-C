#include<stdio.h>
#include<stdlib.h>

float somar(float,float);
float subtrair();
void multiplicar(float, float, float*);
void dividir();

int main(){

    float a, b, c;
    char escolha;
    printf("\n + - * /: ");
    scanf("%c", &escolha);
    switch(escolha){
        case '+':
            printf("\n Informe 2 operandos: ");
            scanf("%f%f", &a,&b);
            printf("\n Soma = %f", somar(a,b));
            break;
        case '-':
            printf("\n Subtr = %f", subtrair());
            break;
        case '*':
            printf("\n Informe 2 operandos: ");
            scanf("%f%f", &a,&b);
            multiplicar(a,b,&c);
            printf("\n Multipl = %f", c);
            break;
        case '/':
            dividir();
    }

    return 0;
}

float somar(float a,float b){
    return a+b;
}

float subtrair(){
    float a,b;
    printf("informe 2 operandos: ");
    scanf("%f%f", &a,&b);
    return a-b;
}

void multiplicar(float a, float b, float*c){
    *c = a*b;
}

void dividir(){
    float a,b;
    printf("\n Informe dois operandos, 1° numerador 2° denominador: ");
    scanf("%f %f", &a, &b);

    if(b!=0)
        printf("\n Divisao = %.2f", a/b);
    else
        printf("erro\n");
}