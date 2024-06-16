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
    int TamanhoLeitura, Tamanhos[4], i;
    do{
        i=0;
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
             Arquivo.close();
            memoriaP.d_bits = log2(cache.TamcacheEmPalavra / Tamanhos[3]);
            memoriaP.w_bits = log2(Tamanhos[1]);
            memoriaP.TamEmBloco = (memoriaP.TamEmPalavra / Tamanhos[1]);
            memoriaP.s_bits = log2(memoriaP.TamEmBloco);
            memoriaP.tag_bits =  memoriaP.s_bits-memoriaP.d_bits;
            RedefinirTMemoria = EsvaziarMemoria(memoriaP, cache);
            preenchermemoria(memoriaP); //Preencher memoria principal
            Arquivo.close();
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
   // Arquivo.close();
}
void preenchermemoria(MP& memoria ){
    int i, j, k;
    float x=0;//gerar aleatório
    for (k=0;k<pow(2,memoria.tag_bits);k++){
        for(i=0; i<pow(2,memoria.d_bits);i++){
            for(j=0;j<pow(2,memoria.w_bits);j++){
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
}

bool LerEnderecos(MemoriaCache& Cache, MP& memoria){
    ifstream entradaArquivo;
    string s;
    vector <string> endereco;
    int x=0;
    while (x!=1 and x!=2){
        cout << "Como deseja buscar endereco na cache? \n 1 -> Um endereco por meio do teclado.\n 2 -> Um ou mais enderecos por meio de arquivo." << endl;
        cin >>  x;
    }
    if (x==1){
        cout << " Insira o Endereco em Binario : "<< endl;
        cin >> s;
        //if (s.length == memoria.)
        //teclado
    }else{
        cout << "Insira o nome do arquivo com a extensao .txt se estiver na pasta, senao, insira o caminho completo do arquivo  enderecos" << endl;
        cin >> s;
        entradaArquivo.open(s);
        if (entradaArquivo.is_open()){
            //executar a leitura e busca na cache
        }else{
            system ("cls");
            cout << "Nao foi possivel abrir o arquivo de enderecos '"<< s << "' !"<< endl;
        }
        //ler arquivo com endereço em cada linha
    }
}



void PausePersonalizado(string mensagem){
    cout << mensagem;
    _getch();
}
bool EsvaziarMemoria(MP& memoria, MemoriaCache& cache){
    bool primeira;
    if (!memoria.palavras.empty()){
        primeira=false;
        memoria.palavras.clear();
        cache.Conjuntos.clear();
    }else{
        primeira=true;
    }
    return primeira;

}

