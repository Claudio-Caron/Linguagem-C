#include <stdio.h>
#include <stdlib.h>

int FibIte(int n);

int FibRec(int n) ;

int main() {
    int n ;
    printf ("insira a quantidade de valores de Fibonacci que voce dejesa imprimir\n");
    scanf ("%i", &n);
    /*
    printf("Fibonacci Iterativo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", FibIte(i));
    }

    printf("\n");
    */

    printf("Fibonacci Recursivo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", FibRec(i));
    }

    system ("pause");
    return 0;
}
int FibIte(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0, b = 1, resultado;

    for (int i = 2; i <= n; i++) {
        resultado = a + b;
        a = b;
        b = resultado;
    }

    return b;
}
int FibRec(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return FibRec(n - 1) + FibRec(n - 2);
    }
}
