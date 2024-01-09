#include <stdio.h>
#include <stdlib.h>
// Crie uma função ehPrimo que recebe um número inteiro como parâmetro e retorna 1 se o número for primo e 0 caso contrário.
void primo (int x);
int main(){
    int a, w;
    do {
    system ("cls");
    puts ("TESTE PARA NUMEROS PRIMOS\ninsira o valor para o teste:");
    scanf ("%d", &a);
    primo (a);
    puts ("Para continuar, digite 1");
    scanf ("%d", &w);
    }while (w==1);
    system ("pause");
    return 0;
}
void primo(int x){
    int i, j, cont=0;
    for (i=1; i<=x; i++){
        j=x % i;
        if (j==0){
            cont++;
            if (cont>2){
                break;
            }
        }
    }
    if (cont==2){
            puts ("Numero primo");
        }else{
            puts ("Nao e primo");
        }
}