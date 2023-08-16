#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int gab(char espaba, int espy);
int main()
{
    char gabarito[4] = "abc";
    int x, i, y = 5;
    x = gab(gabarito[2], y);
    printf("retorno : %i\n", x);
  printf("Você digitou uma opção inválida, insira novamente a alternativa em :");
    for (i = 3; i > 0; i--)
    {
        if (i==3){
            Sleep(3000);
        }
        printf("%i   ", i);
        Sleep(1000);
    }
    system("cls");  
    printf ("deu certo\n");
    system ("pause");
    return 0;
}
int gab(char espaba, int espy)
{
    printf("letra: %c\n", espaba);
    printf("valor do espy= %d\n", espy);
    return 0;
}