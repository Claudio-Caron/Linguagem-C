#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>//rand()
void show();
void pergunta();
void escolha();
    void p1(char *, int *);
    void p2(char *, int *);
    void p3(char *, int *);
    void p4(char *, int *);
    void p5(char *, int *);
    void p6(char *, int *);
    void p7(char *, int *);
    void p9(char *, int *);
int main (){
    setlocale (LC_ALL,"Portuguese");
    int x, y;
    mensagem ();

}
void mensagem(){
    puts ("\t\t\t=======||  ||       || //=======\\  \\               //");
    puts ("\t\t\t||         ||       || ||       ||  \\             //");
    puts ("\t\t\t||======|| ||=======|| ||       ||   \\    //\\    //");
    puts ("\t\t\t        || ||       || ||       ||    \\  //  \\  //");
    puts ("\t\t\t||======== ||       ||  \\=======//     \\//    \\//");
    puts ("\n\t\t\t\t\t||==\\   /====\\");
    puts ("\t\t\t\t\t||  |   |    |");
    puts ("\t\t\t\t\t||==/   \\====/");
    puts ("\t\t\t");
    puts ("\t\t\t");
    puts ("\t\t\t");
    puts ("\t\t\t");
    puts ("\t\t\t");
    puts ("\t\t\t");
    puts ("\t\t\t\t\t\t\t\tDA MAROMBA\n");

}
void escolha(){
    do {
        int cont=0, rodada=1;
        switch{
            case 1:
                mensrodada(rodada);
                prit
        }
        if (x!=op){//x vai ser a resposta e op a opçao escolhida como resposta
            puts ("Alternativa incorreta\nOpção correta:%d\nVocê encerrou o jogo com // reais");
            cont++;
        }
        rodada++;
    }while (cont==0 || rodada<=10); 
}
void mensrodada(int esprodada){
    printf ("\t\t\tRodada %d, Responda a pergunta corretamente e acumule prêmios!\n", esprodada);
}