#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#define N 2
/*3. Para melhor compreensão, este exercício está dividido em subitens. Resolva todos os
subitens no mesmo arquivo.
(a) Defina uma nova estrutura para representar uma banda musical. Essa estrutura
deve ser armazenar informações como nome, gênero, número de integrantes e em que
posição do ranking essa banda está dentre as suas 5 bandas favoritas.
(b) Instancie um vetor do tipo estrutura com tamanho 5. Crie um laço para preencher as
5 variáveis criadas. Após o preenchimento, exiba todas as informações da estrutura.
(c) Crie uma função que solicite ao usuário um número de 1 até 5. Em seguida, seu
programa deve exibir informações da banda cuja posição no seu ranking é a que foi
solicitada pelo usuário.
(d) Crie uma função em C que solicite ao usuário um gênero musical e exiba as bandas
deste gênero em seu ranking. Obs.: Utilize a função strcmp da biblioteca string.h
para comparar duas strings.
(e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre
suas bandas favoritas ou não.
(f) Agora junte tudo e crie um programa que exiba um menu com as opções de preencher
as estruturas e todas as opções dos subitens anteriores.*/
typedef struct Banda
{
    char nome[30];
    char genero[15];
    int integrantes;
    int classif;
} banda;
void preencher(banda cinco[], int n);
void imprimir(banda mam[], int x);
void solicitar(banda esc[], int y);
int main()
{
    banda mamonas[N];
    printf("iniciando\n");
    preencher(mamonas, N);
    imprimir(mamonas, N);
    system("pause");
    return 0;
}
void preencher(banda cinco[], int n)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("insira o nome da banda\n");
        fgets(cinco[i].nome, 30, stdin);
        printf("insira o genero da banda\n");
        fgets(cinco[i].genero, 15, stdin);
        printf("Quantos integrantes a banda possui\n");
        scanf(" %d", &cinco[i].integrantes);
        do
        {
            printf("qual a nota da banda(0 a 5)?\n");
            scanf(" %d", &cinco[i].classif);
            if (cinco[i].classif < 0 || cinco[i].classif > 5)
            {
                system("cls");
                printf("Voce inseriu um valor fora da faixa!!!\ninsira uma nota para a banda %s de 0 a 5\n", cinco[i].nome);
            }
        } while (cinco[i].classif < 0 || cinco[i].classif > 5);
        system("cls");
    }
}
void imprimir(banda mam[], int x)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("banda : %d\n", i + 1);
        printf("%s \n", mam[i].nome);
        printf("Genero: %s \n", mam[i].genero);
        printf("N° de integrantes : %d", mam[i].integrantes);
        printf("Classificação : %d\n\n\n", mam[i].classif);
        Sleep(4000);
        system("cls");
    }
}
void solicitar(banda esc[], int y)
{
    int i;
    do {
    printf("escolha uma banda para a pesquisa: \n");
    scanf("%d", &i);
    if (i<0 || i>N){
        system ("cls");
        printf ("Pesquise uma banda de índice cadastrado");
    }
    }while (i<0 || i>N);
    i++;
    printf("banda : %d\n", i + 1);
    printf("%s \n", esc[i].nome);
    printf("Genero: %s \n", esc[i].genero);
    printf("N° de integrantes : %d", esc[i].integrantes);
    printf("Classificação : %d\n\n\n", esc[i].classif);
}

