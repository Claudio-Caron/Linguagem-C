#include <stdio.h>
#include <stdlib.h>
int gab(char espaba);
int main (){
    char gabarito[4]="abc";
    int x;
    x= gab(gabarito[1]);
    printf ("retorno : %i\n", x);
    system ("pause");
    return 0;
}
int gab(char espaba){
    printf ("letra: %c\n", espaba);
    return 0;
}