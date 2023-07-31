#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define tam 50
#define espaco 3
struct tipo_pessoa {
    int idade;
    float altura;
    char nome[tam];
};
int main (){
    setlocale (LC_ALL, "Portuguese");
    typedef struct tipo_pessoa tipo_pessoa;
    tipo_pessoa pessoa[espaco];
    int i, x;
    puts ("-----------insira os dados----------\n")
    for (i=0; i<3; i++){
        printf ("nome (%d)\n", i+1);
        fgets (nome[i], tam, stdin);
        fflush (stdin);

        puts (idade:  );
        scanf ("%d", idade[i]);
        fflush (stdin);

        puts (altura em cm: );
        scanf ("%f", altura[i]);
        fflush (stdin);
    }
    system (cls);
    puts ("___---dados inseridos das respectias pessoas---___");
    for (i=0; i<3; i++)
        printf ("pessoa %i: %s\nidade: %d anos\n altura %f metros\n", i+1, nome[i], idade[i], altura[i]/100);
    


    system ("pause");
    return 0;

}