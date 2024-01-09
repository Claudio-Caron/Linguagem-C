#include <stdio.h>
#include <stdlib.h>
/*2. Faça uma solução para ler 10 valores inteiros. Em seguida, imprima-os na
ordem inversa (o último elemento deverá ser o primeiro a ser impresso*/
 int main (){
    int i, v[10], x;
    for (i=0; i<10; i++);{
    printf ("insira o numero\n");
    scanf ("%d", &v[i]);
    }
    printf ("ordem inversa:\n");
    for (i=9; i>=0; i--){
        printf ("%d, \n", v[i]);
    }

    system ("pause");
    return 0;
 }
