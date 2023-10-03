#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    char mensrodada = {"jogo da forca\0"};
    int i;
    int j;
    int *y=&j;
    for (i = 0; i <= 15; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("-----------------------\n");
            printf("          ~#~          \n");
            printf(" %c\n", mensrodada[y]);
            printf("          ~#~         \n");
            printf("-----------------------\n");
            Sleep(1000);
            system("cls");
        }
    }
    return 0;
}