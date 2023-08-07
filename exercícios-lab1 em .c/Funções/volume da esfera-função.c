#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14159265
float formula (float r);
int main (){
    float a;
    printf ("insira o valor do raio da esfera\n");
    scanf ("%f", &a);
    printf ("uma esfera de raio %.2f possui volume de %.2f\n", a, formula(a));
    system ("pause");
    return 0;
}
float formula (float r){
    r = pow (r,3);
    return (3/4)*pi*r;
}