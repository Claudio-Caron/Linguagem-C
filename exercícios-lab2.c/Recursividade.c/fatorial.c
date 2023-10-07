#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int fatorial(int num);
int main (void){
    int n;
    printf ("Insira o numero para seu respectivo fatorial:\n");
    scanf ("%d", &n);//n=3
    system ("cls");
    printf ("\n\t\tresultado: %d\n\n", fatorial(n));
    system ("pause");
    return 0;
}
int fatorial(int num){
    int resultado;
    if (num==0){
        resultado=1;
    }else {
        printf ("num= %d\n", num);
        Sleep (2000);
        system ("cls");
        resultado=num*fatorial(num-1);
        /*        3  *         2
        '''       2  *         1
                  1  *         0
        
        */
    }
    return resultado;//6
}
