#include <cstdlib>
#include <vector>
#include <windows.h>
#include <fstream>
#include <cmath>
#include <locale>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;
struct Palavra{
    int Tag;//S-W um dos 2^tag
    int ConjuntoNaCache; // um dos 2^D
    int PalavraNoBloco;//um dos 2^ W
    float Dados;
    Palavra(int tag, int conjunto, int palavra, float dados)
        : Tag(tag), ConjuntoNaCache(conjunto), PalavraNoBloco(palavra), Dados(dados)
         {
         }

    string Endereco (){
        return " | Tag : "+ to_string (Tag)+ " | Conjunto na Cache : "+ to_string(ConjuntoNaCache)+ " | Palavra no Bloco : "+ to_string(PalavraNoBloco);
    }
    /*string MostrarEndereco(){
     //   return to_string(Tag)+to_string(ConjuntoNaCache)+to_string(PalavraNoBloco);
    }*/
    //fun��o para calcular o endere�o completo e retornar em string em bin�rio(solu��o no zap)
};

struct MP{
    int TamEmPalavra;
    int TamEmBloco;
    vector <Palavra> palavras;
    int tag_bits;
    int w_bits;
    int d_bits;
    int s_bits;;
};

struct Conjunto{
    int tag;
    //bool utilizado;
    vector <Palavra> Linhas;
    /*Conjunto (){
        utilizado=true;
    }*/
};

struct MemoriaCache{
    vector <Conjunto> Conjuntos;
    int TamConjunto;
    int TamcacheEmPalavra;
    int substituicoes;
    int acertos;// taxa de acertos ser� acertos/(substituicoes+acertos)
    MemoriaCache(){
        substituicoes=0;
        acertos=0;
    }
};
bool EsvaziarMemoria(MP& memoria, MemoriaCache& cache);
void transformar ();
void PainelDeAbertura();
void PausePersonalizado(string mensagem);
void opcoes(MP& memoria, MemoriaCache& cache);
int ConversorBinchar ();
char ConversoBinint();
//MP inicializarMp(MP mp);
bool CompararTag();// (par�metro)

int LFU();
void LerEnderecos(MemoriaCache& Cache, MP& memoria);


void preenchermemoria(MP& memoria);
void DefinirTamanhos(MP& memoriaP, MemoriaCache& cache);
