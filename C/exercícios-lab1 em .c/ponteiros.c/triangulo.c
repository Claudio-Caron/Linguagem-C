#include <stdio.h>
#include <stdlib.h>
/*3. Faça uma solução para um único módulo calcular a área e o perímetro de 
um retângulo, cujos resultados devam ser exibidos na main(). Utilize apenas 
variáveis locais
*/
void calculo ();
int main(){
    int *x, *y;
    calculo();
    x=6422252;//ra
    y=6422248;//rp
    printf ("Area do retangulo: %d\nPerimetro do retangulo: %d\n", *x, *y);
    system ("pause");
    return 0;
}
void calculo(){
    int a, b;
    int ra, rp;
    printf ("insira a largura do retangulo:\n");
    scanf ("%i", &a);
    printf ("insira o comprimento:\n");
    scanf ("%i", &b);
    ra=a*b;
    rp=2*(a+b);
}