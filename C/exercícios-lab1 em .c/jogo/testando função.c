#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x;
    printf ("insira a letra\n");
    /*scanf ("%c", &x);*/
    x= fgetc (stdin);
    printf ("caractere inserido: %c\n", x);
    /* code */
    system ("pause");
    return 0;
}
