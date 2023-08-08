#include <stdio.h>
#include <stdlib.h>
// Crie uma função ehPrimo que recebe um número inteiro como parâmetro e retorna 1 se o número for primo e 0 caso contrário.
int primo (int x);
int main(){
    int a;
    puts ("TESTE PARA NUMEROS PRIMOS\ninsira o valor para o teste:");
    scanf ("%d", &a);
    printf ("1-primo. 0-nao e primo: %d\n", primo(a));
    system ("pause");
    return 0;
}
int primo (int x){
    int i, cont=0;
    int j;
    for (i=1; i<=x; i++){
        j=x % i;
        if (j==0){
            cont++;
        }
    }
    if (cont==2){
            return 1;
        }else{
            return 0;
        }
}