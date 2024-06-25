#include <cstdlib>
#include <vector>
#include <windows.h>
#include <fstream>
#include <cmath>
#include <locale.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <bitset>

//ARQUIVO COM DEFINIÇÕES, PROTÓTIPOS, STRUCTS E BIBLIOTECAS...

using namespace std;

struct Palavra{
    int Tag;//S-W um dos 2^tag
    int ConjuntoNaCache; // um dos 2^D
    int PalavraNoBloco;//um dos 2^ W
    int Dados;
    Palavra(int tag, int conjunto, int palavra, float dados)
        : Tag(tag), ConjuntoNaCache(conjunto), PalavraNoBloco(palavra), Dados(dados)
         {
         }//construtor para inicializar a palavra

    string Endereco (){
        return "\n\t\t\t    | Tag : "+ to_string (Tag)+ "\n\t\t\t    | Conjunto na Cache : "+ to_string(ConjuntoNaCache)+ "\n\t\t\t    | Palavra no Bloco : "+ to_string(PalavraNoBloco) + "\n\t\t\t    | Dado : "+ to_string(Dados)+ "\n";
    } // impressão dos dados e endereço da palavra
};

struct MP{
    int TamEmPalavra;
    int TamEmBloco;
    vector <Palavra> palavras;// Vetor de palavras da memoria principal
    int tag_bits;
    int w_bits;
    int d_bits;
    int s_bits;
    void ImprimirMemoria(){
        int k;
        for (k=0;k<palavras.size();k++){
            cout << palavras[k].Endereco() << endl;
        } //método para imprimir a memória principal
    }
    string MostrarAtributos(){
        return " -> Tamanho da memoria : "+ to_string(palavras.size())+" palavras\n -> Quantidade de Blocos : "+to_string(TamEmBloco)+
        "\n\n ->    QUANTIDADE DE BITS PARA ENDERECOS : \n\t| - tag : "+ to_string(tag_bits)+ "  |\n\t| - d   : "+ to_string(d_bits)+"  |\n\t| - s   : "
        +to_string(s_bits)+" |\n\t| - w   : "+to_string(w_bits)+ "  |";
        //Retorno string dos atributos/tamanhos da memória
    }
};
struct Linha{
    int tag;
    int frequencia; //frequência com que a linha é acessada para o lfu;
    vector <Palavra> palavrasNaLinha;
    Linha(){
        frequencia=1;
    }//construtor para inicializar a linha com frequência 1, tendo em vista que a linha só é criada quando um bloco da MP
   // é mapeado para a linha, portanto, inicia com 1 acesso
};
struct Conjunto{
    vector <Linha> Linhas;
};

struct MemoriaCache{
    vector <Conjunto> Conjuntos;
    int TamConjunto;
    float acertos;
    float substituicoes;
    int TamcacheEmLinha;
    float acessos;
    MemoriaCache(){
        substituicoes =0;
        acessos = 0;
        acertos =0;
        //construtor para inicializar contadores da cache
    }
    void Imprimir(){
        int i, j, k;
        for (i=0;i<Conjuntos.size(); i++){
            cout << "<Conjunto "<< i << ">\n"<<endl;
            for (j=0; j < Conjuntos[i].Linhas.size(); j++){
                cout << " -> Linha "<< j<<"  :"<< endl;
                for (k=0;k< Conjuntos[i].Linhas[j].palavrasNaLinha.size();k++){
                    cout << Conjuntos[i].Linhas[j].palavrasNaLinha[k].Endereco()<< endl;
                }
            }


        //impressão da cache
        }

    }
    string MostrarAtributos(){
        //impressão de atributos de tamanhos da cache
        return "\n\n < Quantidade de conjuntos na cache : "+to_string((TamcacheEmLinha/TamConjunto))+" >\n < Tamanho da cache em linhas : "
        +to_string(TamcacheEmLinha)+" >\n < Quantidade de linhas por conjunto da cache : "+ to_string(TamcacheEmLinha/(TamcacheEmLinha/TamConjunto))+ " >\n";
    }
};
//PROTÓTIPOS
void PainelDeAbertura();
bool EsvaziarMemoria(MP& memoria, MemoriaCache& cache);
void PausePersonalizado(string mensagem);
void opcoes(MP& memoria, MemoriaCache& cache);
int LFU(Conjunto c, int tam);
void LerEnderecos(MemoriaCache& Cache, MP& memoria);
void preenchermemoria(MP& memoria);
void DefinirTamanhos(MP& memoriaP, MemoriaCache& cache);
void VerificarCache(string ender, MP& memoria, MemoriaCache& cache);
void preenchercache(MemoriaCache& cache);
bool VerificarTamanhos(int NumeroDeLinhas, int Tamanhos[], int n);
