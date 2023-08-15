#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h> //rand()
#include <windows.h>
#define alternativa 150
char perg[10][4][alternativa];
strcpy(perg[0][0], "A) Trabalhar de maneira isolada o biceps.");
strcpy(perg[0][1], "B) Dar enfase na porcao  do biceps braquial, com sinergismo(movimento auxiliar) do ante-braço.");
strcpy(perg[0][2], "C) Como o exercicio e realizado em uma pegada neutra, trabalha isoladamente a cabeça curta do biceps.");
strcpy(perg[0][3], "D) trabalhar de maneira isolada o ante-braço.");
strcpy(perg[1][0], "A)Cenoura.");
strcpy(perg[1][1], "B)Beterraba.");
strcpy(perg[1][2], "C)Melancia.");
strcpy(perg[1][3], "D)Batata-Doce.");
strcpy(perg[2][0], "A)Ovo.");
strcpy(perg[2][1], "B)Castanha-do-Pará.");
strcpy(perg[2][2], "C)Banana.");
strcpy(perg[2][3], "D)Leite.");
strcpy(perg[3][0], "A)Progresso Rápido.");
strcpy(perg[3][1], "B)Peso Real.");
strcpy(perg[3][2], "C)Potência Reversa.");
strcpy(perg[3][3], "D)Personal Record (Recorde Pessoal).");
strcpy(perg[4][0], "A)Hipertrofia.");
strcpy(perg[4][1], "B)Bulking.");
strcpy(perg[4][2], "C)Cutting.");
strcpy(perg[4][3], "D)Endurance.");
strcpy(perg[5][0], "A)Isometria.");
strcpy(perg[5][1], "B)Plyometria.");
strcpy(perg[5][2], "C)Repetições parciais");
strcpy(perg[5][3], "D)Série negativa");
strcpy(perg[6][0], "A)Acelerar o metabolismo.");
strcpy(perg[6][1], "B)Fornecer fibras para a digestão.");
strcpy(perg[6][2], "C)Apoiar o crescimento dos ossos.");
strcpy(perg[6][3], "D)Regular hormônios e fornecer energia.");
strcpy(perg[7][0], "A)Reduzir a necessidade de aquecimento.");
strcpy(perg[7][1], "b)Evitar o ganho excessivo de massa muscular.");
strcpy(perg[7][2], "C)Prevenir lesões articulares.");
strcpy(perg[7][3], "D)Maximizar os ganhos de força e massa muscular.");
strcpy(perg[8][0], "A)Sim.");
strcpy(perg[8][1], "B)Com certeza.");
strcpy(perg[8][2], "C)Sem dúvidas.");
strcpy(perg[8][3], "D)Inquestionavelmente.");
strcpy(perg[9][0], "A)Um estado de relaxamento muscular excessivo.");
strcpy(perg[9][1], "B)Um período de tempo dedicado exclusivamente à recuperação.");
strcpy(perg[9][2], "C)Estresse corporal de treinamento muito alto sem descanso adequado, o que pode levar a fadiga crônica, lesões e redução no desempenho.");
strcpy(perg[9][3], "D)Uma técnica avançada de treinamento para maximizar ganhos de força rapidamente.");
void pergunta();
void escolha();
void certo();
void p1(char *, int *);
void p2(char *, int *);
void p3(char *, int *);
void p4(char *, int *);
void p5(char *, int *);
void p6(char *, int *);
void p7(char *, int *);
void p9(char *, int *);
int p10(char *, int *);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    mensagem();
    system("pause");
    return 0;
}
void mensagem()
{
    int j;
    puts("\t\t\t=======||  ||       || //=======\\  \\\\          //");
    puts("\t\t\t||         ||       || ||       ||  \\\\        //");
    puts("\t\t\t||======|| ||=======|| ||       ||   \\\\  /\\  //");
    puts("\t\t\t        || ||       || ||       ||    \\\\//\\\\//");
    puts("\t\t\t||======== ||       ||  \\=======//     \\/  \\/");
    puts("\n\t\t\t\t\t||==\\   /====\\");
    puts("\t\t\t\t\t||  |   |   |");
    puts("\t\t\t\t\t||==/   \\====/          /_-/\n");
    puts("\t\t\t|\\    /|   ()  ||       ||      ||      /\\     //====\\\\  ");
    puts("\t\t\t||\\  /||   ||  ||       ||      ||     //\\\\   ||      || ");
    puts("\t\t\t|| \\/ ||   ||  ||       ||======||    //--\\\\  ||      ||");
    puts("\t\t\t||    ||   ||  ||       ||      ||   //    \\\\ ||      ||   ");
    puts("\t\t\t||    ||   ||  |======= ||      ||  //      \\\\ \\\\----//");
    puts("\t\t\t");
    puts("\t\t\t\t\t\t\t\tDA MAROMBA");
    Sleep(3000);
    printf("\n\n\t\t\t\tPrepare seu shake\n");
    Sleep(1500);
    printf("\t\t\t\tO jogo irá iniciar");
    Sleep(1000);
    for (j = 0; j < 3; j++)
    {
        printf(".");
        Sleep(1000);
    }
    printf(" \n");
}
void escolha()
{
    char gabarito[10];
    int q = 0;
    do
    {
        int cont = 0, rodada = 1;
        switch (rodada)
        {
        case 1:
            cont = p1(/*matriz ou struct de string*/);
            break;
        case 2:
            cont = p2(/*parametros de alternativa*/);
            break;
        case 3:
            cont = p3(/*parametros de alternativa*/);
            break;
        case 4:
            cont = p4(/*parametros*/);
            break;
        case 5:
            cont = p5(/*parametros*/);
            break;
        case 6:
            cont = p6(/*parametros*/);
            break;
        case 7:
            cont = p7(/*parametros*/);
            break;
        case 8:
            cont = p8(/*parametros*/);
            break;
        case 9:
            cont = p9(/*parametros*/);
            break;
        case 10:
            cont = p10(/*parametros*/);
            break;
        }
        q++;
        rodada++;
    } while (cont == 0 || rodada <= 10);
}
void mensrodada(int esprodada)
{
    printf("\t\t\tRodada %d, Responda a pergunta corretamente e acumule prêmios!\n", esprodada);
}
void certo()
{
    printf("\t\t\t\tResposta correta!\n\t\t\t\tAguarde para prosseguir\n");
}
int p1(char *, int *);
{
    char r;
    do
    {
        printf("1- Qual é a finalidade do exercício rosca martelo?\n");
        scanf("%c", &r);
        stdin;
        r = toupper(r);
    } while (r != 'A' && r != 'B' && r != 'C' && r != 'D'); // alterar a condição no momento que for implementado ajudas.
    if (r == /*x*/)
    {
        certo();
        printf("Premio da rodada:1 Hiper calórico.\n");
        sleep(2000);
        system("cls");
        return 0;
    }
    else
    {
        puts("Resposta incorreta! Você não garantiu prêmios");
        puts("\t\t\tVOCÊ É FRANGOLINO!!!"); // função para desenhar um frango se tiver tempo
        return 1;
    }
}
int p2(char *, int *);
{
    char r;
    do
    {
        printf("\n");
        scanf("%c", &r);
        stdin;
        r = toupper(r);
    } while (r != 'A' && r != 'B' && r != 'C' && r != 'D'); // alterar a condição no momento que for implementado ajudas.
    if (r==//x){
        certo();
        printf ("Premio da rodada:1 Hiper calórico.\n");
        system ("cls");
        sleep (2000);
        return=0;
}
}