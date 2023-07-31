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
    for (i=0, i<3, i++){
        
    }

}