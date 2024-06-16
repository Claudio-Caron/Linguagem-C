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
    int Tag;//S-W
    int ConjuntoNaCache; //D
    int PalavraNoBloco;// W
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
    //função para calcular o endereço completo e retornar em string em binário(solução no zap)
};

struct MP{
    int TamEmPalavra;
    int TamEmBloco;
    vector <Palavra> palavras;
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
};
void EsvaziarMemoria(MP& memoria, MemoriaCache& cache);
void transformar ();
void PainelDeAbertura();
void PausePersonalizado(string mensagem);
void opcoes();
int ConversorBinchar ();
char ConversoBinint();
//MP inicializarMp(MP mp);
bool CompararTag();// (parâmetro)

int LFU();
void LerDados(MemoriaCache Cache);



bool preenchermemoria(float w, float d,float s, float tag, MP& memoria);
void DefinirTamanhos(MP& memoriaP, MemoriaCache& cache);
