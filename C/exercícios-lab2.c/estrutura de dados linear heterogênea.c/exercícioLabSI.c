#include <stdio.h>
#include <windows.h>
#include <string.h>
#define C 2
#define N 30
typedef struct dados
{
    char nome[N];
    float nota[2];
    int index;

} dados;
void incluir(dados *p);


int main(void)
{
    int i;
    float nota1[C], maior = 0, menor = 0;
    float nota2[C];
    dados aluno[C];
    for (i = 0; i < C; i++)
    {
        printf("Nome do aluno %i\n", i + 1);
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        do
        {
            printf("insira a nota 1 do aluno\n");
            fflush(stdin);
            scanf("%f", &nota1[i]);
            printf("insira a nota 2 do aluno\n");
            fflush(stdin);
            scanf("%f", &nota2[i]);
            fflush(stdin);
            if (nota1[i] < 0 || nota1[i] > 10 || nota2[i] > 10 || nota1[i] < 0)
                printf("Voce inseriu uma nota fora da faixa, digite uma nota de 0 a 10\n");
        } while (nota1[i] < 0 || nota1[i] > 10 || nota2[i] > 10 || nota1[i] < 0);
        aluno[i].nota[1] = nota1[i];
        aluno[i].nota[2] = nota2[i];

        if (i == 0)
        {
            if ()
                maior = nota2[i];
            menor = nota2[i];
        }
    }
    for (i = 0; i < C; i++)
    {
        system("cls");
        printf("aluno : %s\n", aluno[i].nome);
        printf("nota 1: %.2f\n", nota1[i]);
        printf("nota 2: %.2f\n", nota2[i]);
        Sleep(3000);
        system("cls");
    }
    typedef dados b_struct;

    return 0;
}