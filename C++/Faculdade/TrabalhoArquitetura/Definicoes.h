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
        return "\n\t\t\t    | Tag : "+ to_string (Tag)+ " | \n\t\t\t    | Conjunto na Cache : "+ to_string(ConjuntoNaCache)+ " | \n\t\t\t    | Palavra no Bloco : "+ to_string(PalavraNoBloco) + " | \n\t\t\t    | Dados : "+ to_string(Dados)+ " | \n";
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
    int tag_bits;
    int w_bits;
    int d_bits;
    int s_bits;;
};
struct Linha{
    int tag;
    int frequencia;
    vector <Palavra> palavrasNaLinha;
    Linha(){
        frequencia=0;
    }
};
struct Conjunto{
    //bool utilizado;
    vector <Linha> Linhas;
    /*Conjunto (){
        utilizado=true;
    }*/
};

struct MemoriaCache{
    vector <Conjunto> Conjuntos;
    int TamConjunto;
    int TamcacheEmPalavra;
    int substituicoes;
    int acertos;// taxa de acertos será acertos/(substituicoes+acertos)
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
bool CompararTag();// (parâmetro)

int LFU(Conjunto c, int tam);
void LerEnderecos(MemoriaCache& Cache, MP& memoria);


void preenchermemoria(MP& memoria);
void DefinirTamanhos(MP& memoriaP, MemoriaCache& cache);
void VerificarCache(string ender, MP& memoria, MemoriaCache& cache);
void preenchercache(MemoriaCache& cache);
