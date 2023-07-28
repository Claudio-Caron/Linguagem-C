#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*bolar uma senha de nome N, com numeros, letras maiusculas e minusculas. Solicitar ao usuário a senha correta, com 3 chances.(utilizar o comando para limpar dados do buffin do teclado) */
#define N 9
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    char senha [N]={"Dede7755"}, sinserida[N]; 
    int i, x;
    for (i=3; i>0; i--){
        printf ("insira sua senha:\n");
        fgets(sinserida, N, stdin);
        x = strcmp(senha,sinserida);
        if (x==0){
            printf ("Senha correta!!\n");
            break;
        }
        else
            printf ("SENHA INCORRETA! Você possui %i tentativas restantes\n", i-1);
        fflush (stdin);

    }

    system ("pause");
    return 0;
}