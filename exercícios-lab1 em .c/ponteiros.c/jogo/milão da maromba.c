#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h> //rand()
void show();
void pergunta();
void escolha();
void certo();
void errado ();
void p1(char *, int *);
void p2(char *, int *);
void p3(char *, int *);
void p4(char *, int *);
void p5(char *, int *);
void p6(char *, int *);
void p7(char *, int *);
void p9(char *, int *);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    mensagem();
    system ("pause");
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
    do
    {
        int cont = 0, rodada = 1;
        switch
        {
        case 1:
            mensrodada(rodada);
        }
        if (x != op)
        { // x vai ser a resposta e op a opçao escolhida como resposta
            puts("Alternativa incorreta\nOpção correta:%d\nVocê encerrou o jogo com // reais");
            cont++;
        }
        rodada++;
    } while (cont == 0 || rodada <= 10);
}
void mensrodada(int esprodada)
{
    printf("\t\t\tRodada %d, Responda a pergunta corretamente e acumule prêmios!\n", esprodada);
}
void certo(){
    printf ("\t\t\t\tResposta correta!\n\t\t\t\tAguarde para prosseguir\n");
    Sleep (2000);
    system ("cls");
}
void errado (){
    Printf ("Resposta incorreta!Você não alcançou o premio máximo!");
}
int p1(char *, int *);
{
    char r;
    do{
    printf("1- Qual é a finalidade do exercício rosca martelo?\n");
    scanf ("%c", &r);
    r = toupper (r);
    }while (r!='A' && r!='B' && r!='C' && r!='D');//alterar a condição no momento que for implementado ajudas.
    if (r==//x){
        certo();
        printf ("Premio da rodada:1 Hiper calórico.\n");
        return=0;
    }
    //

}