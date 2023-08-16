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
int p1(char gaba, int x, char esppremios[][40], int z);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    void preencher();
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
    int cont = 0, rodada = 0;
    char gabarito[11] = "BBCDCDDDDC";
    /*1- B
      2- B
      3- C
      4- D
      5- C
      6- D
      7- D
      8- D
      9- D
      10-C*/
    char premios[10][40] = {
        "1-Hiper Calórico",
        "2-Omega 3",
        "3-Caixa de barrinhas proteicas",
        "4-Pasta de amendoim",
        "5-Beta Alanina",
        "6-Pre treino",
        "7-Whey",
        "8-Creatina",
        "9-Um Mes de academia grátis",
        "10-Um ano de farmacia gratis"}; //fazer um for do 0 ao premio da rodada menos um no else, com fito de imprimir todos os premios conseguidos no jogo;
    do
    {
        switch (rodada)
        {
        case 0: // inicia rodada 1, porém, utilizei o 0 para reciclar a variavel em outra função
            mensrodada(rodada);
            cont = p1(gabarito[0], rodada, premios, 0);//se não der certo, tentar jogar [] da matriz para cima e deixar como parametro em baixo so o nome da matriz; ou ainda fazer uma função somente para os premios;
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
    } while (cont == 0 || rodada <= 9);
}
void mensrodada(int esprodada)
{
    printf("\t\t\tRodada %d, Responda a pergunta corretamente e acumule prêmios!\n", esprodada+1);
}
void certo()
{
    printf("\t\t\t\tResposta correta!\n\t\t\t\tAguarde para prosseguir\n");
}
int p1(char gaba, int x, char esppremios[][40], int z)
{
    char perguntas[11][200] = {
        "1- Qual é a finalidade do exercício \"rosca martelo\"?",
        "2- Qual alimento e responsável por promover a vaso-dilatação nos treinos,elevando a taxa de circulação sanguínea, irrigando os músculos com mais eficiência durante os treinos?",
        "3- Qual alimento é reconhecido por retirar as câimbras, pela sua rica fonte de potássio, auxiliando na contração e recuperação muscular?",
        "4- O que significa \"PR\" em musculação?",
        "5- Qual termo é usado para descrever o processo de redução de gordura corporal para destacar a definição muscular?",
        "6- Qual é a técnica em que você realiza esforço na fase excêntrica do exercício, na falha muscular?",
        "7- Qual é o papel das gorduras na dieta de um praticante de musculação?",
        "8- Qual é a importância da periodização no treinamento de musculação?",
        "9- Professor é Fake-Natty?",
        "10- O que é o \"overtraining\" e por que é importante evitá-lo?"};
    char r;
    int i;
    // int x=0;//posisao do vetor da pergunta;(usar como parâmetro em chamarpergunta)
    do
    {
        printf("%s", perguntas[x]);
        for (i = 0; i < 4; i++)
        {
            printf("%s\n", perg[x][i]);
        }
        // funcao das alternativas
        scanf("%c", &r);
        stdin;
        r = toupper(r);
        if (r != 'A' || r != 'B' || r != 'C' || r != 'D')
        {
            printf("Você digitou uma opção inválida, insira novamente a alternativa em :");
            for (i = 3; i > 0; i--)
            {
                if (i == 3)
                {
                    Sleep(3000);
                }
                printf("%i   ", i);
                Sleep(1000);
            }
            system("cls");
        }
    } while (r != 'A' || r != 'B' || r != 'C' || r != 'D'); // alterar a condição no momento que for implementado ajudas.
    if (r == gaba)
    {
        certo();
        printf ("Premio obtido na rodada: %s\n", esppremios[z]);   // usar vetor para os premios tentar local ou global
        Sleep(2000);
        system("cls");
        return 0;
    }
    else
    {
        //fazer um for para mostrar os premios conseguidos
        puts("Resposta incorreta! Você não garantiu prêmios Nessa rodada");
        puts("\t\t\tVOCÊ É FRANGOLINO!!!\n"); // função para desenhar um frango se tiver tempo
        return 1;
    }
}
/*int p2(char *, int *);
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
}*/
void preencher()
{
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
    strcpy(perg[7][1], "B)Evitar o ganho excessivo de massa muscular.");
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
}