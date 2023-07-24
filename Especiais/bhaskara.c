#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a, b, c, delta;
    //x1=a; x2=b;
    printf ("insira os valores de a, b e c, respectivamente\n");
    scanf ("%f %f %f", &a, &b, &c);
    b=pow (b,2);
    delta=b-4*a*c;
    if (delta>=0){
        a = (-b + sqrt(delta)) / (2 * a);
        b = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes sao: x1 = %.2f e x2 = %.2f\n", a, b);
    }else 
        printf ("Nao existem raizes reais\n");
    /* exercício bhaskara*/
    system ("pause");
    return 0;
}
