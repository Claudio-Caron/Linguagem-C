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
void alterar(pront *s, int n);
void imprimirfor(pront *p, int j);
int pesquisar(pront *s, int n);
void mensagem(pront *, int i);
void excluir(pront *, int n);
int main(void)
{
    pront dados[C];
    int i, j = -1, op, a;
    setlocale(LC_ALL, "Portuguese");
    for (i = 1; i != 3; i++)
    {
        i--;
        printf("\tEscolha uma das opções de formulário:\n");
        printf("\t\t\t[1]-INCLUIR PRONTUÁRIO\n\t\t\t[2]-IMPRIMIR ALUNOS EM ORDEM DE PRONTUÁRIO\n\t\t\t[3]-PESQUISAR PRONTUÁRIO\n\t\t\t[4]-ALTERAR PRONTUÁRIO\n\t\t\t[5]-EXCLUIR PRONTUÁRIO\n\t\t\t[6]-SAIR\n\n\t\t");
        fflush(stdin);
        scanf("%d", &op);
        system("cls");
        switch (op)
        {
        case 1:
            j++;
            // incluir
            incluir(dados, j);
            break;
        case 2:
            // imprimir
            imprimirfor(dados, j);
            break;
        case 3:
            // pesquisar
            a = pesquisar(dados, j);
            break;
        case 4:
            // alterar
            alterar(dados, j);
            break;
        case 5:
            // excluir
            system("cls");
            do
            {
                printf("\t\t\tescolha qual ficha deseja excluir:\n\t\t\t\t");
                fflush(stdin);
                scanf("%i", &a);
                a--;
            } while (a > dados[j].index || a < 0);
            excluir(dados, a);
            system("cls");
            printf("\t\t\tALUNO %s EXCLUIDO\n", dados[a - 1].aluno);
            break;
        case 6:
            i = 3;
            system("cls");
            printf("\t\t\tENCERRADO!!!\n\n");
            // sair
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
void imprimirfor(pront *p, int j)
{
    int i;
    system("cls");
    for (i = 0; i <= j; i++)
    {
        mensagem(p, i);
    }
}
void alterar(pront *s, int n)
{
    int y;
    // busca
    y = pesquisar(s, n);
    incluir(s, y);
    // incluir
    // fazer o loop com resposta 1 ou 0(outra resposta),
    // quando escolher 1, alterar espaço do vetor de form escolhido pela chamada da função incluir
}
int pesquisar(pront *s, int n)
{
    system("cls");
    int x;
    do
    {
        system("cls");
        imprimirfor(s, n);
        printf("\t\t\tescolha um dos prontuários:\n");
        fflush(stdin);
        scanf("%d", &x);
        x--;
    } while (x > s[n].index || x < 0); // problema
    system("cls");
    mensagem(s, x);
    return x;
}
void mensagem(pront *p, int i)
{
    printf("\t\t\t----------------------------\n");
    printf("\t\t\t|%i: %s                     | \n", p[i].index, p[i].aluno);
    printf("\t\t\t|Nota 1: %.2f               | \n", p[i].notas[0]);
    printf("\t\t\t|Nota 2: %.2f               | \n", p[i].notas[1]);
    printf("\t\t\t----------------------------- \n\n");
}
void excluir(pront *s, int n)
{
    strcpy(s[n - 1].aluno, "");
    s[n - 1].notas[0] = 0;
    s[n - 1].notas[1] = 0;
}
