#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <locale.h>
#define N 30
#define C 10
typedef struct pront
{
    float notas[2];
    char aluno[N];
    int index;
} pront;
void incluir(pront *n, int j);
pront excluir(int *, pront *n)
void imprimir(pront *p, int j);
int main(void)
{
    pront dados[C];
    int i, j = -1, op;
    setlocale(LC_ALL, "Portuguese");
    for (i = 1; i != 3; i++)
    {
        i--;
        printf("\tEscolha uma das opções de formulário:\n");
        printf("\t\t\t[1]-INCLUIR PRONTUÁRIO\n\t\t\t[2]-IMPRIMIR ALUNOS EM ORDEM DE PRONTUÁRIO\n\t\t\t[3]-PESQUISAR PRONTUÁRIO\n\t\t\t[4]-ALTERAR PRONTUÁRIO\n\t\t\t[5]-EXCLUIR PRONTUÁRIO\n\t\t\t[6]-SAIR\n\n\t\t\t\t");
        fflush(stdin);
        scanf("%d", &op);
        system("cls");
        switch (op)
        {
        case 1:
            j++;
            incluir(dados, j);
            break;
        case 2:
            imprimir(dados, j);
            break;
        case 3:

        case 4:

        case 5:

        case 6:
            i = 3;
            break;
        default:
            printf("INSIRA UMA OPÇÃO VÁLIDA\n");
            break;
        }
    }
    system("pause");
    return 0;
}
/*void inicializar_index(pront *n, int i)
{
    n[i].index = 0;
}*/
void incluir(pront *n, int j)
{
    float nota1, nota2;
    printf("\t\t\tInsira o nome do aluno:\n");
    fflush(stdin);
    fgets(n[j].aluno, sizeof(n[j].aluno), stdin);
    do
    {
        printf("\t\t\tInsira a primeira nota:\n");
        fflush(stdin);
        scanf("%f", &nota1);
        printf("\t\t\tInsira  a segunda nota:\n");
        fflush(stdin);
        scanf("%f", &nota2);
        if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10)
        {
            system("cls");
            printf("\t\t\tINSIRA UM VALOR DENTRO DA FAIXA(0 a 10)\n");
            printf("\t\t\taluno: %s\n", n[j].aluno);
        }
    } while (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10);
    n[j].notas[0] = nota1;
    n[j].notas[1] = nota2;
    n[j].index = j + 1;
    system("cls");
}
void imprimir(pront *p, int j)
{
    int i;
    system("cls");
    for (i = 0; i <= j; i++)
    {
        printf("----------------------------\n");
        printf("|%i: %s                     | \n", p[i].index, p[i].aluno);
        printf("|Nota 1: %.2f               | \n", p[i].notas[0]);
        printf("|Nota 2: %.2f               | \n", p[i].notas[1]);
        printf("----------------------------- \n\n");
    }
}
