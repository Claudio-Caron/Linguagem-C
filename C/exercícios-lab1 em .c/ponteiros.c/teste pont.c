#include <stdio.h>
#include <stdlib.h>
int ponteiro(int *fX, int X){
    *fX=&X;
    X =10;
    return *fX;
}
int main (){
    int x;
    int *pX;
    printf ("ponteiro/valor de x: %i\n", ponteiro(*pX, x));

    system ("pause");
    return 0;
}
