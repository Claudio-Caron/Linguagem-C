#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "banda.h"
#include "preencher.h"
#include "print.h"
#include "solicitar.h"
#define N 5

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
void imprimir(banda mam[], int i);
void solicitar(banda esc[], int y);
void preencher(banda cinco[], int n);
void mensagem();
int main()
{
    banda mamonas[N];
    printf("iniciando\n");
    preencher(mamonas, N);
    imprimir(mamonas, N);
    solicitar(mamonas, N);
    system("pause");
    return 0;
}
