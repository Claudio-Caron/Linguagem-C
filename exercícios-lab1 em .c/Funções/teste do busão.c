#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h> //rand()
#include <windows.h>
#define alternativa 150
char perg[10][4][alternativa];
void mensrodada(int esprodada);
void preencher();
void pergunta();
void escolha();
void certo();
void mensagem();
void galinha();
void dica(int *espx);
int remov = 2, numdica = 2, pula = 1;
int p1(char gaba, int x, char esppremios[][40], int z);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    mensagem();
    preencher();
    system("cls");
    escolha();
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
    printf("\t\t\t\tO jogo ir� iniciar");
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
    int cont = 0, rodada = 0;
    char gabarito[11] = "BBCDCDDDDC";
    char premios[10][40] = {
        "1:# Hiper Cal�rico",
        "2:# Omega 3",
        "3:# Caixa de barrinhas proteicas",
        "4:# Pasta de amendoim",
        "5:# Beta Alanina",
        "6:# Pr�-treino",
        "7:# Whey Protein",
        "8:# Creatina",
        "9:# Um M�s de academia gr�tis",
        "10:# Um ano de farm�cia gr�tis"}; // fazer um for do 0 ao premio da rodada menos um no else, com fito de imprimir todos os premios conseguidos no jogo;
    do
    {
        switch (rodada)
        {
        case 0:                                         // inicia rodada 1, por�m, utilizei o 0 para reciclar a variavel em outra fun��o
            cont = p1(gabarito[0], rodada, premios, 0); // se n�o der certo, tentar jogar [] da matriz para cima e deixar como parametro em baixo so o nome da matriz; ou ainda fazer uma fun��o somente para os premios;
            break;
        case 1:
            cont = p1(gabarito[1], rodada, premios, 1);
            break;
        case 2:
            cont = p1(gabarito[2], rodada, premios, 2);
            break;
        case 3:
            cont = p1(gabarito[3], rodada, premios, 3);
            break;
        case 4:
            cont = p1(gabarito[4], rodada, premios, 4);
            break;
        case 5:
            cont = p1(gabarito[5], rodada, premios, 5);
            break;
        case 6:
            cont = p1(gabarito[6], rodada, premios, 6);
            break;
        case 7:
            cont = p1(gabarito[7], rodada, premios, 7);
            break;
        case 8:
            cont = p1(gabarito[8], rodada, premios, 8);
            break;
        case 9:
            cont = p1(gabarito[9], rodada, premios, 9);
            break;
        }
        rodada++;
    } while (cont == 0 && rodada <= 9);
}
void mensrodada(int esprodada)
{
    printf("\t\t\t\t\t\t----------\n");
    printf("\t\t\t\t\t\t|RODADA %d|\n\t\t\t\t\t\t----------\n Responda a pergunta corretamente e acumule pr�mios!\n\n", esprodada + 1);
    printf("/--------------------------------------------\\\n");
    printf("|Para remover duas alternativas, digite 1    |\n");
    printf("|--------------------------------------------|\n");
    printf("|Para solicitar uma dica da quest�o, digite 2|\n");
    printf("|--------------------------------------------|\n");
    printf("|Para saltar a pergunta, digite 3            |\n");
    printf("\\--------------------------------------------/\n");
}
void certo()
{
    printf("\t\t\t\tResposta correta!\n\t\t\t\tAguarde para prosseguir\n\n");
}
int p1(char gaba, int x, char esppremios[][40], int z)
{
    char perguntas[11][200] = {
        "1- Qual � a finalidade do exerc�cio \"rosca martelo\"?",
        "2- Qual alimento e respons�vel por promover a vaso-dilata��o nos treinos, elevando a taxa de circula��o sangu�nea,          irrigando os m�sculos com mais efici�ncia durante os treinos?",
        "3- Qual alimento � reconhecido por retirar as c�imbras, pela sua rica fonte de pot�ssio, auxiliando na contra��o e recu-   pera��o muscular?",
        "4- O que significa \"PR\" em muscula��o?",
        "5- Qual termo � usado para descrever o processo de redu��o de gordura corporal para destacar a defini��o muscular?",
        "6- Qual � a t�cnica em que voc� realiza esfor�o na fase exc�ntrica do exerc�cio, na falha muscular?",
        "7- Qual � o papel das gorduras na dieta de um praticante de muscula��o?",
        "8- Qual � a import�ncia da periodiza��o no treinamento de muscula��o?",
        "9- Professor � Fake-Natty?",
        "10- O que � o \"overtraining\" e por que � importante evit�-lo?"};
    char r;
    int i, y = 0, contaj = 0, contdica = 0; // usar ponteiro para declarar essas vari�veis no bloco do escolha;Se n�o der certo, declarar como globais, mas vai dar certo sim, confia
    // int x=0;//posisao do vetor da pergunta;(usar como par�metro em chamarpergunta)
    do
    {
        do
        {
            mensrodada(x);
            printf("REMO��ES RESTANTES: %d\nDICAS RESTANTES: %d\nSALTO RESTANTE: %d\n\n", remov, numdica, pula);
            printf("%s\n", perguntas[x]);
            for (i = 0; i < 4; i++)
            {
                printf("%s \n", perg[x][i]);
            }
            printf("\t\t\t------------------------------------------------------\n");
            printf("\t\t\t|Insira a alternativa ou solicite um recurso de ajuda|\n");
            printf("\t\t\t------------------------------------------------------\n\t\t\t\t\t      ");
            // funcao das alternativas
            scanf(" %c", &r);
            fflush(stdin);
            r = toupper(r);
            if (r != 'A' && r != 'B' && r != 'C' && r != 'D' && r != '1' && r != '2' && r != '3')
            {
                printf("Voc� digitou uma op��o inv�lida, insira novamente a alternativa em :");
                for (i = 3; i > 0; i--)
                {
                    if (i == 3)
                    {
                        Sleep(1000);
                    }
                    printf("%i   ", i);
                    Sleep(1000);
                }
                system("cls");
            }
        } while (r != 'A' && r != 'B' && r != 'C' && r != 'D' && r != '1' && r != '2' && r != '3'); // alterar a condi��o no momento que for implementado ajudas.
        if (r == '3' && pula > 0)
        {
            pula--;
            printf("\t\t\t\tVoc� saltou essa pergunta!!!\n\n");
            Sleep(3000);
            system("cls");
            return 0;
        }
        else if (r == '3' && pula == 0)
        {
            printf("\t\t\t\tVoc� j� usou o recurso de salto\n");
            if (contdica != 0)
            {
                Sleep(3000);
                system("cls");
                dica(&x);
                continue;
            }
            Sleep(3000);
            system("cls");
            continue;
        }
        if (x == 8)
        {
            if (r == 'A' || r == 'B' || r == 'C')
            {
                r = 'D';
            }
        }
        if (r == '2')
        {
            if (numdica > 0)
            {
                if (numdica == 1 && contdica != 0)
                {
                    printf("Voc� j� solicitou dicas nessa rodada!!!RESPONDA A PERGUNTA OU SOLICITE OUTRA AJUDA\n\n");
                    Sleep(3000);
                    system("cls");
                    dica(&x);
                    continue;
                }
                if (numdica == 2 && contdica == 0)
                {
                    numdica--;
                    contdica++;
                    system("cls");
                    dica(&x);
                    continue;
                }
                else if (numdica == 1 && contdica == 0)
                {
                    numdica--;
                    system("cls");
                    dica(&x);
                    continue;
                }
            }
            else if (numdica == 0)
            {
                printf("Voc� n�o possui mais dicas dispon�veis!!!RESPONDA A PERGUNTA OU SOLICITE OUTRA AJUDA\n\n");
                Sleep(3000);
                system("cls");
                // dica(&x);
                continue;
            }
        }
        if (r == gaba)
        {
            certo();
            printf("Premio obtido na rodada %s\n", esppremios[z]); // usar vetor para os premios tentar local ou global
            Sleep(4000);
            system("cls");
            if (x==9){
            printf("\t\t\t\t\t-------------------------------------\n");
            printf("\t\t\t\t\t|PARAB�NS!!! VOC� CONCLUIU O DESAFIO|\n");
            printf("\t\t\t\t\t-------------------------------------\n\n");
            printf("\t\t\t\t\tPremios Recebidos:\n");
            for (z = 0; z < x; z++)
            {
                printf("\t\t\t\t%s\n", esppremios[z]);
            }
            }
            return 0;
        }
        else if (r == '1' && remov > 0)
        {

            if (contaj != 0)
            {
                printf("Voc� j� removeu uma alternativa nessa rodada!!\nRESPONDA A PERGUNTA OU SOLICITE OUTRA AJUDA\n\n");
                Sleep(3000);
                system("cls");
                continue;
            }
            remov--;
            contaj++;
            // da para transformar numa fun��o com ponteiro x;
            switch (x)
            {
            case 0:
                strcpy(perg[0][0], "A)");
                strcpy(perg[0][2], "C)");
                break;
            case 1:
                strcpy(perg[1][0], "A)");
                strcpy(perg[1][3], "D)");
                break;
            case 2:
                strcpy(perg[2][1], "B)");
                strcpy(perg[2][0], "A)");
                break;
            case 3:
                strcpy(perg[3][1], "B)");
                strcpy(perg[3][2], "C)");
                break;
            case 4:
                strcpy(perg[4][3], "D)");
                strcpy(perg[4][0], "A)");
                break;
            case 5:
                strcpy(perg[5][1], "B)");
                strcpy(perg[5][0], "A)");
                break;
            case 6:
                strcpy(perg[6][1], "B)");
                strcpy(perg[6][2], "C)");
                break;
            case 7:
                strcpy(perg[7][0], "A)");
                strcpy(perg[7][1], "B)");
                break;
            case 8:
                strcpy(perg[8][0], "A)");
                strcpy(perg[8][1], "B)");
                break;
            case 9:
                strcpy(perg[9][0], "A)");
                strcpy(perg[9][3], "D)");
                break;
            }
            system("cls");
            continue;
        }
        else if (r == '1' && remov == 0)
        {
            printf("Voc� esgotou todas as remo��es\nRESPONDA A PERGUNTA OU SOLICITE OUTRA AJUDA\n\n");
            Sleep(3000);
            system("cls");
            continue;
        }
        else
        {
            printf("Alternativa correta: %c\n", gaba);
            galinha(); // transformar essa galinha em uma fun��o
            //  fazer um for para mostrar os premios conseguidos
            if (x == 0)
            {
                printf("\t\t\t-------------------------------------------\n");
                printf("\t\t\t|Jogo encerrado, voc� n�o conseguiu pr�mios|\n");
                printf("\t\t\t--------------------------------------------\n");
                return 1;
            }
            printf("\t\t\t-------------------------------------\n");
            printf("\t\t\t|Jogo encerrado, pr�mios acumulados:|\n");
            printf("\t\t\t-------------------------------------\n");
            for (z = 0; z < x; z++)
            {
                printf("\t\t\t%s\n", esppremios[z]);
            }
            return 1;
        }
        if (x == 9 && r == gaba)
        {
            printf("\t\t\t\t\t-------------------------------------\n");
            printf("\t\t\t\t\t|PARAB�NS!!! VOC� CONCLUIU O DESAFIO|\n");
            printf("\t\t\t\t\t-------------------------------------\n\n");
            printf("\t\t\t\t\tPremios Recebidos:\n");
            for (z = 0; z < x; z++)
            {
                printf("\t\t\t\t%s\n", esppremios[z]);
            }
        }
    } while (y == 0);
}
void preencher()
{
    strcpy(perg[0][0], "A) Trabalhar de maneira isolada o b�ceps.");
    strcpy(perg[0][1], "B) Dar �nfase na porcao  do b�ceps braquial, com sinergismo(movimento auxiliar) do ante-bra�o.");
    strcpy(perg[0][2], "C) Como o exercicio e realizado em uma pegada neutra, trabalha isoladamente a cabe�a curta do biceps.");
    strcpy(perg[0][3], "D) trabalhar de maneira isolada o ante-bra�o.");
    strcpy(perg[1][0], "A)Cenoura.");
    strcpy(perg[1][1], "B)Beterraba.");
    strcpy(perg[1][2], "C)Melancia.");
    strcpy(perg[1][3], "D)Batata-Doce.");
    strcpy(perg[2][0], "A)Ovo.");
    strcpy(perg[2][1], "B)Castanha-do-Par�.");
    strcpy(perg[2][2], "C)Banana.");
    strcpy(perg[2][3], "D)Leite.");
    strcpy(perg[3][0], "A)Progresso R�pido.");
    strcpy(perg[3][1], "B)Peso Real.");
    strcpy(perg[3][2], "C)Pot�ncia Reversa.");
    strcpy(perg[3][3], "D)Personal Record (Recorde Pessoal).");
    strcpy(perg[4][0], "A)Hipertrofia.");
    strcpy(perg[4][1], "B)Bulking.");
    strcpy(perg[4][2], "C)Cutting."); //
    strcpy(perg[4][3], "D)Endurance.");
    strcpy(perg[5][0], "A)Isometria.");
    strcpy(perg[5][1], "B)Plyometria.");
    strcpy(perg[5][2], "C)Repeti��es parciais");
    strcpy(perg[5][3], "D)S�rie negativa"); //
    strcpy(perg[6][0], "A)Acelerar o metabolismo.");
    strcpy(perg[6][1], "B)Fornecer fibras para a digest�o.");
    strcpy(perg[6][2], "C)Apoiar o crescimento dos ossos.");
    strcpy(perg[6][3], "D)Regular horm�nios e fornecer energia."); //
    strcpy(perg[7][0], "A)Reduzir a necessidade de aquecimento.");
    strcpy(perg[7][1], "B)Evitar o ganho excessivo de massa muscular.");
    strcpy(perg[7][2], "C)Prevenir les�es articulares.");
    strcpy(perg[7][3], "D)Maximizar os ganhos de for�a e massa muscular."); //
    strcpy(perg[8][0], "A)Sim.");                                           //
    strcpy(perg[8][1], "B)Com certeza.");                                   //
    strcpy(perg[8][2], "C)Sem d�vidas.");                                   //
    strcpy(perg[8][3], "D)Inquestionavelmente.");                           //
    strcpy(perg[9][0], "A)Um estado de relaxamento muscular excessivo.");
    strcpy(perg[9][1], "B)Um per�odo de tempo dedicado exclusivamente � recupera��o.");
    strcpy(perg[9][2], "C)Estresse corporal de treinamento muito alto sem descanso adequado, o que pode levar a fadiga cr�nica, les�es e redu��o no desempenho."); //
    strcpy(perg[9][3], "D)Uma t�cnica avan�ada de treinamento para maximizar ganhos de for�a rapidamente.");
}
void galinha()
{
    printf("            ,~.\n");
    printf("           ,-'__ `-,\n");
    printf("          {,-'  `. }\n");
    printf("         ,( � )   `-.__\n");
    printf("        <=.) (         `-.__,==' ' ' '} \t\t---------------------\n");
    printf("          (   )                      /) \t\t|RESPOSTA INCORRETA!|\n");
    printf("           `-'\\  ,                    )\t\t\t---------------------\n");
    printf("               |  \\        `~.        /\n");
    printf("               \\   `._        \\      /\n");
    printf("                \\     `._____,'    ,'\n");
    printf("                 `-.             ,-'\n");
    printf("                    `-._     _,-'\n");
    printf("                        77jj'\n");
    printf("                       //_||\n");
    printf("                    __//--'/`\n");
    printf("                  ,--'/`  '\n");
    puts("Voc� n�o garantiu pr�mios Nessa rodada!!!");
    puts("\t\t\tVOC� � FRANGOLINO!!!\n");
    printf("\t\t\t       \\   \n");
    printf("\t\t\t       (o>  \n");
    printf("\t\t\t\\ \\  / ) \n");
    printf("\t\t\t\\ `)   )    \n");
    printf("\t\t\t /  /__/   \n");
    printf("\t\t\t/   / \n");
}
void dica(int *espx)
{
    char *dicas[] = {
        "DICA: Esse exerc�cio � realizado com movimento em sentido ao peito.",
        "DICA: Sua origem permite que seja produzida a��car de seus nutrientes.",
        "DICA: � um alimento associado aos macacos.",
        "DICA: � dito ao levantar um peso que nunca levantou antes.",
        "DICA: d�fict cal�rico.",
        "DICA: Fase em que segura a descida.",
        "DICA: Lubrifica os ossos, mas tamb�m auxilia na produ��o de algo que garante o funcionamento do organismo.",
        "DICA: Melhorar a performance.",
        "DICA: Observe o peitoral dele!",
        "DICA: (sobretreinamento)."};
    printf("Dica: %s\n", dicas[*espx]);
} // ultima alteracao;
