
#include "Definicoes.h"



 int main(int argc, char const *argv[])
 {
    MP MemoriaPrincipal;
    MemoriaCache Cache;
    setlocale(LC_ALL, "pt_BR.UTF-8");
    PainelDeAbertura();
    DefinirTamanhos(MemoriaPrincipal, Cache);
    //opcoes();
    system ("pause");

    /* code */
    return 0;
 }

 void PainelDeAbertura(){
    cout << "\n\n\n\n\n\n\n\t\t\t\t           ---------------------------" << endl;
    cout           << "\t\t\t\t           | Trabalho de Arquitetura |" <<endl;
    cout           << "\t\t\t\t           ---------------------------\n\n\n\t\t\t\t       ";
    // PERSONALIZAR CONFORME POSSUIR TEMPO
    system ("pause");
     system ("cls");
 }

 void opcoes(){
    int x=-1;
    while(x!=0){

       cout << "\t\t\tEscolha uma das opcoes: " << endl;
       cout << "\t\t\t  1 -> Ler dados em posição específica."<< endl;
       cout << "\t\t\t  2-> Redefinir tamanhos de memórias\n\t\t\t  0 -> SAIR"<<endl;
        cin >> x;
    switch (x){
    case 1:
        //Inserir endereço para verificar taxa de acerto e falha na cache
        break;
    case 2:
        //Redefinir tamanhos(Deletar vetores
        break;
    case 0:
        //sair
        system ("cls");
        cout << "SIMULADOR ENCERRADO"<< endl;
        break;
    default :
        PausePersonalizado("Opcao invalida! insira qualquer tecla para retornar ao menu.");
        break;
    }
    }
 }
void DefinirTamanhos(MP& memoriaP, MemoriaCache& cache){
    //controlar a entrada de tamanho -> if tal tamanho do vetor tamanhos ser incorreto, mostrar a mensagem e dar o continue
    string Path;
    ifstream Arquivo;
    bool RedefinirTMemoria;
    float w, d, s, tag;
    int TamanhoLeitura, Tamanhos[4], i=0;
    do{
        cin.clear();
        cout << "Insira o nome do arquivo com os tamanhos das memórias : \n"<< endl;
        cin >> Path;
        Arquivo.open(Path);
        if (Arquivo.is_open()){
            while (Arquivo>>TamanhoLeitura && i<4){//garante que somente 4 linhas sejam lidas
                Tamanhos[i]=TamanhoLeitura;
                cout << TamanhoLeitura << endl;
                i++;
            }

            memoriaP.TamEmPalavra=(Tamanhos[0]*256);
            cache.TamcacheEmPalavra=(Tamanhos[2]/2);
            cache.TamConjunto=Tamanhos[3];

            d = log2(cache.TamcacheEmPalavra / Tamanhos[3]);
            w = log2(Tamanhos[1]);
            memoriaP.TamEmBloco = (memoriaP.TamEmPalavra / Tamanhos[1]);
            s = log2(memoriaP.TamEmBloco);
            tag = s-d;
            EsvaziarMemoria(memoriaP, cache);
            RedefinirTMemoria = preenchermemoria(w,d,s,tag,memoriaP); //Preencher memórias
            cout<< "Arquivo com tamanhos de memoria lidos com sucesso!";
            if (RedefinirTMemoria){
                cout<< "As memorias foram instanciadas!"<<endl;
            }else {
                cout << "Os tamanhos das memorias foram redefinidos"<<endl;
            }
            system ("pause");
            system ("cls");
        }else {
            system ("cls");
            cout << "Erro ao abrir o Arquivo '"<< Path << "'!"<< endl;

        }
    }while(!Arquivo.is_open());// ou tamanhos fora da faixa
    Arquivo.close();
}
bool preenchermemoria(float w, float d,float s, float tag, MP& memoria ){
    int i, j, k;
    bool primeira;
    if (memoria.palavras.empty())
        primeira=true;
    else
        primeira=false;

    float x=0;//gerar aleatório
    for (k=0;k<pow(2,tag);k++){
        for(i=0; i<pow(2,d);i++){
            for(j=0;j<pow(2,w);j++){
                //cout <<" tag : "<< k <<" d : "<< i <<" w : " << j<< endl;
                x=x+2.47;
                memoria.palavras.emplace_back(k,i,j,x);
            }
        }
    }
    if (!memoria.palavras.empty()){
        cout << "Tamanho da memoria: (em palavra) : " << memoria.palavras.size() << endl;
        cout << "Primeiro endereco da memoria (em palavra) : " << memoria.palavras.front().Endereco() << endl;
        cout << "Ultimo endereco da memoria : " << memoria.palavras.back().Endereco() << endl;
    }else{
        cout<< "A memoria esta vazia"<< endl;
    }
    return primeira;
}

void LerDados(MemoriaCache& Cache){
    cout << "Como deseja\n 1 -> Por meio do teclado.\n 2 -> Por meio de arquivo com um ou mais enderecos." << endl;

}



void PausePersonalizado(string mensagem){
    cout << mensagem;
    _getch();
}
void EsvaziarMemoria(MP& memoria, MemoriaCache& cache){
    if (!memoria.palavras.empty()){
        memoria.palavras.clear();
        cache.Conjuntos.clear();
    }
}






