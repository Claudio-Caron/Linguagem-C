#include "Definicoes.h"



 int main(int argc, char const *argv[])
 {
    srand(time(0));
    MP MemoriaPrincipal;
    MemoriaCache Cache;
    PainelDeAbertura();
    DefinirTamanhos(MemoriaPrincipal, Cache);
    opcoes(MemoriaPrincipal, Cache);
    system ("pause");


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

 void opcoes(MP& memoria, MemoriaCache& cache){
    int x=-1;
    while(x!=0){
       system ("cls");
       cout << "\t\t\tEscolha uma das opcoes: " << endl;
       cout << "\t\t\t  1 -> Buscar endereco na cache "<< endl;
       cout << "\t\t\t  2 -> Redefinir tamanhos de memorias\n\t\t\t  0 -> X-SAIR-X\n\t\t\t\t";
        cin >> x;
    switch (x){
    case 1:
        system ("cls");
        LerEnderecos(cache, memoria);
        //Inserir endereço para verificar taxa de acerto e falha na cache
        break;
    case 2:
        system ("cls");
        DefinirTamanhos(memoria, cache);
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
    int TamanhoLeitura, Tamanhos[4], i=0;
    do{
        cin.clear();
        cout << "Insira o nome do arquivo com os tamanhos das memorias : \n"<< endl;
        cin >> Path;
        Arquivo.open(Path);
        if (Arquivo.is_open()){
            while (Arquivo>>TamanhoLeitura && i<4){//garante que somente 4 linhas sejam lidas
                Tamanhos[i]=TamanhoLeitura;
                cout << TamanhoLeitura << endl;
                i++;
            }
            memoriaP.TamEmPalavra=(Tamanhos[0]*256);
            cache.TamConjunto=Tamanhos[3];
            memoriaP.w_bits = log2(Tamanhos[1]);
            memoriaP.TamEmBloco = (memoriaP.TamEmPalavra / Tamanhos[1]);
            cache.TamcacheEmLinha =((Tamanhos[2]*256)/Tamanhos[1]);
            if (VerificarTamanhos(cache.TamcacheEmLinha, Tamanhos, 4)){
                PausePersonalizado("\t~~Pressione qualquer tecla para inserir novamente o arquivo de tamanhos~~");
                system ("cls");
                i=0;
                Arquivo.close();
                continue;
            }
            memoriaP.d_bits = log2(cache.TamcacheEmLinha / cache.TamConjunto);
            memoriaP.s_bits = log2(memoriaP.TamEmBloco);
            memoriaP.tag_bits =  memoriaP.s_bits-memoriaP.d_bits;
            RedefinirTMemoria = EsvaziarMemoria(memoriaP, cache);
            preenchermemoria(memoriaP); //Preencher memoria principal
            preenchercache(cache); // definir quantidade de conjuntos
            cout<< " # Arquivo com tamanhos de memoria lidos com sucesso ! ";
            if (RedefinirTMemoria){
                cout<< "As memorias foram instanciadas #"<<endl;
                PausePersonalizado(" -> Pressione qualquer tecla para seguir ao menu ");
            }else {
                cout << "Os tamanhos das memorias foram redefinidos # \n"<<endl;
                PausePersonalizado(" -> Pressione qualquer tecla para retornar ao menu ");
            }

            system ("cls");
        }else {
            system ("cls");
            cout << "*** Erro ao abrir o Arquivo '"<< Path << "'! ***"<< endl;


        }
    }while(!Arquivo.is_open());// ou tamanhos fora da faixa
    Arquivo.close();
}
void preenchercache(MemoriaCache& cache){
    cache.Conjuntos.resize(cache.TamcacheEmLinha/cache.TamConjunto);
}

void preenchermemoria(MP& memoria ){
    int i, j, k;
    int x;
    for (k=0;k<pow(2,memoria.tag_bits);k++){
        for(i=0; i<pow(2,memoria.d_bits);i++){
            for(j=0;j<pow(2,memoria.w_bits);j++){
                //cout <<" tag : "<< k <<" d : "<< i <<" w : " << j<< endl;
                x=rand()%130;
                memoria.palavras.emplace_back(k,i,j,x);
            }
        }
    }
    if (!memoria.palavras.empty()){
        cout << "Tamanho da memoria: (em palavra) : " << memoria.palavras.size() << endl;
        cout << "\nPrimeiro endereco da memoria : " << memoria.palavras.front().Endereco() << endl;
        cout << "Ultimo endereco da memoria : " << memoria.palavras.back().Endereco() << endl;
    }else{
        cout<< "A memoria esta vazia"<< endl;
    }
}


void PausePersonalizado(string mensagem){
    cout << mensagem  ;
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

void LerEnderecos(MemoriaCache& Cache, MP& memoria){
    ifstream entradaArquivo;
    string s, endereco;
   // vector <string> endereco;
    int x=0, i;
    while (x!=1 and x!=2){
        cout << "Como deseja buscar endereco na cache? \n 1 -> Somente um endereco por meio do teclado.\n 2 -> Um ou mais enderecos por meio de arquivo." << endl;
        cin >>  x;
        if (x!=1 and x!=2){
            system ("cls");
            cout << "* Insira uma opcao valida ! *" <<endl;
        }
    }
    if (x==1){  // modularizar
        system ("cls");
        while (true){
            cout << " -> Insira o Endereco em Binario com "<< (memoria.s_bits+memoria.w_bits) << " bits : " << endl;
            cin >> s;
            if (s.size() == (memoria.s_bits+memoria.w_bits)){// comparar tamanhos de endereços fornecidos pelo usuário e tamanho utilizado na memoria
                for (i=0;i<s.size();i++){
                    if (s[i]!='0' and s[i]!='1'){
                        system ("cls");
                        cout << "* Insira somente caracteres 0 ou 1 no endereço ! *" << endl;
                        i=(s.size())+1;
                    }
                }
                if(i==(s.size())+2){
                    continue;
                }
                break;
            }else{
                system ("cls");
                cout << "* O endereco inserido possui "<< s.size() << " bits ! *"<< endl;
                for (i=0;i<s.size();i++){
                    if (s[i]!='0' and s[i]!='1'){
                        cout << "* Insira somente caracteres 0 ou 1 no endereço ! *" << endl;
                        i=(s.size())+1;
                    }
                }
            }
        }
       // i=stoi(s, nullptr, 2);
        //cout << "Teste de Conversao : Endereco lido : " << i <<  endl;
        system ("cls");
        VerificarCache(s,memoria, Cache);
        PausePersonalizado("Pressione qualquer tecla para retornar ao menu ");

    }else{  //  modularizar
        if (x==2){
            do {
            cout << "Insira o nome do arquivo com a extensao .txt se estiver na pasta, senao, insira o caminho completo do arquivo de enderecos" << endl;
            cout << "Cada endereco do arquivo deve conter "<< (memoria.s_bits+memoria.w_bits) <<" bits"<<endl;
            cin >> s;
            entradaArquivo.open(s);
            if (entradaArquivo.is_open()){
                i=0;
                while (entradaArquivo>>s){
                    i++;
                }
                while (entradaArquivo>>s){
                    VerificarCache(s,memoria, Cache);
                    PausePersonalizado("\n - >Pressione qualquer tecla para prosseguir para o proximo endereco do arquivo");
                }
                //executar a leitura e busca na cache
            }else{
                system ("cls");
                cout << " *** Nao foi possivel abrir o arquivo '"<< s << "'  de enderecos ! *** \n"<< endl;
                cout << " * Para retornar ao menu, insira 0 *" << endl;
            }
            //ler arquivo com endereço em cada linha
            }while(!entradaArquivo.is_open());
            entradaArquivo.close();
        }
    }
}

void VerificarCache(string ender, MP& memoria, MemoriaCache& cache){
    int i, j, id, k;
    string aux;
    int tagbits, dbits, wbits, sbits;

    aux = ender.substr(0,memoria.tag_bits);
    tagbits = stoi(aux, nullptr, 2);

    aux = ender.substr(memoria.tag_bits, memoria.d_bits);
    dbits = stoi(aux, nullptr, 2);

    aux = ender.substr((memoria.d_bits+memoria.tag_bits), memoria.w_bits);
    wbits = stoi(aux, nullptr, 2);

    aux = ender.substr(0, memoria.s_bits);
    sbits = stoi(aux, nullptr, 2);

    for (i=0;i<(cache.Conjuntos[dbits].Linhas.size());i++){
        if (cache.Conjuntos[dbits].Linhas[i].tag == tagbits and cache.Conjuntos[dbits].Linhas.size()>0){
            cache.acertos++;
            cache.Conjuntos[dbits].Linhas[i].frequencia++;
            cout << " # O endereco "<< ender << " esta na cache# \n"<< endl;
            cout << " -> Conjunto : " << dbits << " \n\n -> Linha: "<< i <<"\n"<< endl;
            cout << " >>> Palavras da linha : \n"<< endl;
            for (j=0;j<pow(2,memoria.w_bits);j++){
                cout << cache.Conjuntos[dbits].Linhas[i].palavrasNaLinha[j].Endereco() << endl;
            }
            return;
        }
    }
    cout << " * O endereco '" << ender<< "' nao estava na cache ! *" << endl;
    if (cache.TamConjunto == cache.Conjuntos[dbits].Linhas.size()){ //testar trocar por i
     //   cout<< "entrou no if ( usar lfu)" << endl;
        system ("pause");
        id= LFU(cache.Conjuntos[dbits], cache.TamConjunto);
        cache.Conjuntos[dbits].Linhas[id].frequencia=1;
        for (j=0;j<pow(2,memoria.w_bits);j++){
            cache.Conjuntos[dbits].Linhas[id].palavrasNaLinha[j]=memoria.palavras[(sbits*pow(2,memoria.w_bits))+ j];
        }
        cache.substituicoes++;
        cout<< "LFU utilizado"<< endl;
        cout << "A linha "<<id<<  " foi substituida" << endl;

    }else{
        Linha novaLinha;
        novaLinha.tag = tagbits;
        cout << " -> Palavras adicionadas : " <<endl;
        for (j = 0; j < pow(2, memoria.w_bits); j++) {
            novaLinha.palavrasNaLinha.push_back(memoria.palavras[(sbits*pow(2,memoria.w_bits)) + j]);
            cout << memoria.palavras[(sbits*pow(2,memoria.w_bits)) + j].Endereco()<< endl;
        }
        //imprimir o bloco que foi trazido para a cache;
        cache.Conjuntos[dbits].Linhas.push_back(novaLinha);
        cache.Conjuntos[dbits].Linhas[cache.Conjuntos[dbits].Linhas.size() -1].frequencia=1;
        cout<< "\n # O bloco '"<< sbits << "' foi adicionado na cache # \n" << endl;
    }
}

int LFU(Conjunto c, int tam){ //transformar em um método na struct conjunto
    int i, id=0, menosfrequente=c.Linhas[0].frequencia;
    for (i=0;i<tam; i++){
        if (c.Linhas[i].frequencia<menosfrequente)
            menosfrequente=c.Linhas[i].frequencia;
            id = i;
    }
    return id;
}

bool VerificarTamanhos(int NumeroDeLinhas, int Tamanhos[], int n){
    bool erro=false;
    if (Tamanhos[0]>256){
        cout << "\t*** | O tamanho da memoria, lido na primeira linha do arquivo inserido, possui valor acima do permitido ! | ***\n" << endl;
        erro=true;
    }
    if (Tamanhos[1]!=2 and Tamanhos[1]!=4 and Tamanhos[1]!=8){
        cout <<"\t*** | A quantidade de palavras, lido na segunda linha do arquivo, possui valores invalidos ! | ***\n"<< endl;
        erro=true;
    }
    if (Tamanhos[2]> 32){
        cout << "\t*** | O tamanho da Cache, lido na terceira linha do arquivo, possui tamanho maior que o permitido ! | ***\n" << endl;
        erro=true;
    }
    if (Tamanhos[3]<2 or Tamanhos[3]>(NumeroDeLinhas/2)){
        cout << "\t*** | O Numero de linhas por conjunto da cache ,lido na quarta linha do Arquivo, está fora do limite permitido ! | ***"<< endl;
        erro=true;
    }
    return erro;
}
