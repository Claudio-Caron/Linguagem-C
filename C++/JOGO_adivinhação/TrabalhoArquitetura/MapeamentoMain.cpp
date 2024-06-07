#include <iostream>
#include <cstdlib>
#include <vector>
#include <windows.h>
#include <fstream>
using namespace std;
void transformar ();
void PainelDeAbertura();
void InicializarMemorias();
void opcoes();
int ConversorBinchar ();
char ConversoBinint();
//MP inicializarMp(MP mp);


struct Ender{
    string Tag;// Bloco na memória
    string ConjuntoNaCache;
    string PalavraNoBloco;
    string MostrarEndereco(){
        return (Tag+ConjuntoNaCache+PalavraNoBloco);
    }
};


struct MP{
    int Tam;
    vector <Ender> Endereco;
    vector <int> Valor;
};



 int main(int argc, char const *argv[])
 {
    int x=0;
    string Path;
    ifstream Arquivo;
    cout << "Insira o diretório do arquivo com os tamanhos das memórias : "<< endl;
    cin >> Path;
    Arquivo.open(Path);
    if (Arquivo.is_open()){
        while (Arquivo>>x){
            cout << x << endl;
        }
      //  opcoes();
    }else {
        system ("cls");
        cout << "Erro ao abrir o Arquivo"<< endl;

    }
    system ("pause");
    system ("cls");
    /* code */
    return 0;
 }
 void PainelDeAbertura(){
    cout << "Trabalho De Aquitetura" << endl;
    cout << "Pressione uma tecla para continuar: \n";
    // PERSONALIZAR CONFORME POSSUIR TEMPO
    system ("cls");
 }
 void opcoes(){
    int x=-1;

    while(x!=1 or x!=2 or x!=3 or x!=0){

       cout << "Escolha uma das opcoes: " << endl;
       cout << "\t\t\t  1 -> Escrever informações na memória.\n\t\t\t  2 -> Ler dados em posição específica."<< endl;
       cout << "\t\t\t 3-> Redefinir tamanhos de memórias\n\t\t\t  0 -> SAIR"<<endl;
        cin >> x;
    switch (x){
    case 1:
        //Inserir via teclado
        break;
    case 2:
        // Inserir por meio de endereços em Arquivo
        break;
    case 3:
        //Redefinir tamanhos(Deletar vetores
    case 0:
        //sair
        break;
    default :
        system ("cls");
        cout << "\t\t\tNumero de opção inválido!\n\t\t\tInsira outra opção dentre as seguintes: " << endl;
        cout << "\t\t\t  1- Escrever informações na memória.\n\t\t\t  2- Ler dados em posição específica.\n\t\t\t 3- Redefinir tamanhos de memórias"<< endl;
        cin >> x;
    }
    }
 }
 void DefTMemorias(){



}















