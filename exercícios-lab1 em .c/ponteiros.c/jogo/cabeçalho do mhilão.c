#include <stdio.h>
#include <windows.h>
int main()
{
   /* int j;
    puts ("\t\t\t=======||  ||       || //=======\\  \\\\          //");
    puts ("\t\t\t||         ||       || ||       ||  \\\\        //");
    puts ("\t\t\t||======|| ||=======|| ||       ||   \\\\  /\\  //");
    puts ("\t\t\t        || ||       || ||       ||    \\\\//\\\\//");
    puts ("\t\t\t||======== ||       ||  \\=======//     \\/  \\/");
    puts ("\n\t\t\t\t\t||==\\   /====\\");
    puts ("\t\t\t\t\t||  |   |   |");
    puts ("\t\t\t\t\t||==/   \\====/          /_-/\n");
    puts ("\t\t\t|\\    /|   ()  ||       ||      ||      /\\     //====\\\\  ");
    puts ("\t\t\t||\\  /||   ||  ||       ||      ||     //\\\\   ||      || ");
    puts ("\t\t\t|| \\/ ||   ||  ||       ||======||    //--\\\\  ||      ||");
    puts ("\t\t\t||    ||   ||  ||       ||      ||   //    \\\\ ||      ||   ");
    puts ("\t\t\t||    ||   ||  |======= ||      ||  //      \\\\ \\\\----//");
    puts ("\t\t\t");
    puts ("\t\t\t\t\t\t\t\tDA MAROMBA");
    Sleep (3000);
    printf ("\n\n\t\t\t\tPrepare seu shake\n");
    Sleep (1500);
    printf ("\t\t\t\tO jogo ira iniciar");
    Sleep(1000);
    for (j=0; j<3; j++){
        printf (".");
        Sleep (1000);
    }
    printf ("                                                               \n");*/
    int z, x = 9;
    char premios[10][40] = {
        "1:# Hiper Calórico",
        "2:# Omega 3",
        "3:# Caixa de barrinhas proteicas",
        "4:# Pasta de amendoim",
        "5:# Beta Alanina",
        "6:# Pré-treino",
        "7:# Whey Protein",
        "8:# Creatina",
        "9:# Um Mês de academia grátis",
        "10:# Um ano de farmácia grátis"};
    printf("\t\t\t\t\t-------------------------------------\n");
    printf("\t\t\t\t\t|PARABÉNS!!! VOCÊ CONCLUIU O DESAFIO|\n");
    printf("\t\t\t\t\t-------------------------------------\n\n");
    printf("\t\t\t\t\tPrêmios Recebidos:\n");
    for (z = 0; z <= x; z++)//sinal de "=" adicionado para imprimir o último prêmio.
    {
        printf("\t\t\t\t%s\n", premios[z]);//quando passar de volta, adicionar "esp" no vetor; 
    }
    /*
    printf ("\n\n");
    printf("\t\t\t --      |======================================|            \n");
    printf("\t\t\t ||      |***********\\                          |   \n");
    printf("\t\t\t ||======|************\\ |  |  |  |  |  |  |  |  | \n");
    printf("\t\t\t ||======|*************\\------------------------|=====----------                \n");
    printf("\t\t\t ||======|**************\\                       |              /\\\n");
    printf("\t\t\t ||      |***************\\                      |             /  \\\n");
    printf("\t\t\t --      |======================================|            /    \\\n");
    printf("\t\t\t                                                            /      \\ \n");
    printf("\t\t\t                                                           /        \\      \n");
    printf("\t\t\t                                                          (          ) \n");
    printf("\t\t\t                                                           `--.....-' \n");*/
    printf (" \n");
    printf (" --      |======================================|            \n");
    printf (" ||      |°°°°°°°°°°°\\               |   \n");
    printf (" ||======|°°°°°°°°°°°°\\ |  |  |  |  |        \n");
    printf (" ||======|°°°°°°°°°°°°°\\-----------|=====----------                \n");
    printf (" ||======|°°°°°°°°°°°°°°\\         |              /\\\n");
    printf (" ||      |°°°°°°°°°°°°°°°\\       |             /  \\\n");
    printf (" --      |======================================|            /    \\\n");
    printf ("                                                            /      \\ \n");
    printf ("                                                           /        \\      \n");
    printf ("                                                          (          ) \n");
    printf ("                                                           `--.....-' \n");
    return 0;
}
