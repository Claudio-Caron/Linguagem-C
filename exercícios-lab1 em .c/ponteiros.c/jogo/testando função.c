#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x;
    printf ("insira a letra\n");
    /*scanf ("%c", &x);*/
    fgets ("x",1,stdin);
    printf ("caractere inserido: %c\n", x);
    /* code */
    system ("pause");
    return 0;
}
