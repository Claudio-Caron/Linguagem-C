#include "Definicoes.h"

//ALUNOS :

//-> Cláudio André Ferreira Caron.
//-> Issaka Diaw Seye.

//================================================\\
//AS FUNÇÕES ESTÃO COMENTADAS NA SUA PRIMEIRA LINHA \\
//==================================================//

 int main(int argc, char const *argv[])
 {
    srand(time(0)); // funcao para inicializar o tempo com base nos
    //setlocale(LC_ALL, "pt_BR.UTF-8");
    MP MemoriaPrincipal;
    MemoriaCache Cache;
    PainelDeAbertura();
    DefinirTamanhos(MemoriaPrincipal, Cache);
    opcoes(MemoriaPrincipal, Cache);
    system ("pause");
    return 0;
 }


 void PainelDeAbertura(){
     //FUNÇÃO APENAS PARA IMPRIMIR A MENSAGEM INICIAL
    cout << "\n\n\n\n\n\n\n\t\t\t\t           ---------------------------" << endl;
    cout <<"\t\t\t\t           | TRABALHO DE ARQUITETURA |"<< endl;
    cout           << "\t\t\t\t           ---------------------------\n\n\n\t\t\t\t       ";
    system ("pause");
     system ("cls");
 }

 void opcoes(MP& memoria, MemoriaCache& cache){ // FUNÇÃO PARA EXIBIR O MENU DE OPÇÕES E CONTROLAR POR MEIO DO SWITCH
    char x='8';
    string a;
    while(x!='0'){
        system ("cls");
        cin.clear();
        cout << "\t\t\t\t     Escolha uma das opcoes: " << endl;
        cout << "\t\t\t\t       1 -> Buscar endereco na cache "<< endl;
        cout << "\t\t\t\t       2 -> Redefinir tamanhos de memorias\n\t\t\t\t";
        cout << "       3 -> Imprimir Memoria Principal\n\t\t\t\t       4 -> Imprimir Memoria Cache\n\t\t\t\t       5 -> Exibir informacoes da MP e da memoria cache\n\t\t\t\t       0 -> X-SAIR-X\n\t\t\t\t\t       ";
        cin >> a;
        x=a[0];
    switch (x){
    case '1' :
        system ("cls");
        LerEnderecos(cache, memoria);
        break;
    case '2' :
        system ("cls");
        DefinirTamanhos(memoria, cache);
        break;
    case '3' :
        system ("cls");
        memoria.ImprimirMemoria();
        PausePersonalizado("\n -> Pressione qualquer tecla para retornar ao menu");
        break;
    case '4' :
        system ("cls");
        cache.Imprimir();
        PausePersonalizado("\n -> Pressione qualquer tecla para retornar ao menu");
        break;
    case '5' :
        system ("cls");
        cout << memoria.MostrarAtributos()<< endl;
        cout << cache.MostrarAtributos();
        PausePersonalizado("\n -> Pressione qualquer tecla para retornar ao menu");
        break;
    case '0' :
        //sair
        system ("cls");
        cout << "\t\t\t\t|\\\\ MEMORIAS RESULTANTES : ///|"<< endl;
        memoria.ImprimirMemoria();
        cache.Imprimir();
        if (cache.acessos!=0){
            cout << "\n -> Taxa de acertos : " <<(cache.acertos/cache.acessos)*100  << " %" <<endl;
            cout << " -> Substituicoes realizadas : "<< cache.substituicoes << endl;
            cout << " -> Taxa de falhas : " <<(1-(cache.acertos/cache.acessos))*100 << " %"<< endl;
        }else{
            cout << "\n X - NAO HOUVE ACESSO A CACHE - x"<< endl;
            //nao houveraam acessos
        }

        cout << "\n ----------------------"<< endl;
        cout << " | SIMULADOR ENCERRADO|"<< endl;
        cout << " ----------------------"<< endl;
        break;
    default :
        PausePersonalizado("\n\t\t\t\t\t   <OPCAO INVALIDA>!\n\t\t\t        * insira qualquer tecla para retornar ao menu *");
        break;
    }
    }
 }

void DefinirTamanhos(MP& memoriaP, MemoriaCache& cache){
    //FUNÇÃO QUE LÊ O ARQUIVO DE ENTRADA DE TAMANHOS E É RESPONSÁVEL POR INICIALIZAR
    //OU REDEFINIR O TAMANHO DAS MEMÓRIAS, NO CASO DE REDEFINIR,
    // ESSA FUNÇÃO UTILIZA UMA FUNÇÃO PARA LIMPAR A CACHE E MEMORIA.
    //TAMBÉM CALCULA OS BITS E TAMANHOS DE CACHE E MEMORIA, DEFINE E INSTANCIA AS MESMAS.
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
                PausePersonalizado("\n -> Pressione qualquer tecla para seguir ao menu ");
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
    //FUNÇÃO QUE ALOCA A QUANTIDADE NECESSÁRIA DE CONJUNTOS NA CACHE
    cache.Conjuntos.resize(cache.TamcacheEmLinha/cache.TamConjunto);
}

void preenchermemoria(MP& memoria ){
    // FUNÇÃO QUE PREENCHE A MEMÓRIA COM ENDEREÇOS EM DECIMAL, RESPECTIVOS AOS TAGBITS, DBITS E WBITS E OS DADOS ALEATÓRIOS DE CADA PALAVRA.
    int i, j, k, x;
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
    // FUNÇÃO COM COMANDO SEMELHANTE AO SYSTEM ("PAUSE"), PORÉM COM MENSAGEM MANIPULADA PELO PARÂMETRO
    cout << mensagem  ;
    _getch();
}

bool EsvaziarMemoria(MP& memoria, MemoriaCache& cache){
    //FUNÇÃO PARA ESVAZIAR A MP E CACHE, E REINICIAR OS CONTADORES
    //O RETORNO BOOLEANO É PARA SABER SE É A PRIMEIRA VEZ QUE A MEMORIA
    //ESTÁ SENDO CRIADA, OU SE ESTÁ SENDO REDEFINIDA, COM FITO DE
    //IMPRIMIR AO USUÁRIO A MENSAGEM DE MEMORIAS CRIADAS OU DE REDEFINIDAS
    bool primeira;
    if (!memoria.palavras.empty()){
        primeira=false;
        memoria.palavras.clear();
        cache.Conjuntos.clear();
        cache.acertos=0;
        cache.acessos=0;
        cache.substituicoes=0;
    }else{
        primeira=true;
    }
    return primeira;
}

void LerEnderecos(MemoriaCache& Cache, MP& memoria){
    // FUNÇÃO RESPONSÁVEL POR SOLICITAR AO USUÁRIO A MANEIRA DE LEITURA DE ENDEREÇOS,
    //VERIFICAR SE O ENDEREÇO POSSUI OS BITS NECESSARIOS DE ENDEREÇO E SE ESTÁ EM DECIMAL.
    //NO CASO DA INSERÇÃO MANUAL, APÓS TRATAR A ENTRADA, O ENDEREÇO É CONFERIDO E FEITO O MAPEAMENTO
    //POR MEIO DA CHAMADA DA FUNÇÃO VerificarCache. NO CASO DOS ENDEREÇOS POR ARQUIVO, CADA ENDEREÇO É
    //ENVIADO E TESTADO POR VEZ NA FUNÇÃO VerificarCache.
    ifstream entradaArquivo;
    string s, endereco, x="0";
    bool certo;
    int  i, a;
    while (x!="1" and x!="2"){
        cout << "Como deseja buscar endereco na cache? \n 1 -> Somente um endereco por meio do teclado.\n 2 -> Um ou mais enderecos por meio de arquivo." << endl;
        cin >>  x;
        if (x!="1" and x!="2"){
            system ("cls");
            cout << "* Insira uma opcao valida ! *" <<endl;
        }
    }
    if (x=="1"){  // modularizar
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
        system ("cls");
        VerificarCache(s,memoria, Cache);
        PausePersonalizado("Pressione qualquer tecla para retornar ao menu ");

    }else{  //  modularizar
        if (x=="2"){
            system ("cls");
            do {
            cout << " -> Insira o nome do arquivo com a extensao .txt se estiver na pasta\n -> Ou insira o caminho completo do arquivo de enderecos (sem aspas)\n" << endl;
            cout << " # Cada endereco do arquivo deve conter "<< (memoria.s_bits+memoria.w_bits) <<" bits #"<<endl;
            cout << " ~ Para retornar ao menu, insira 0 ~" << endl;
            cin >> s;
            entradaArquivo.open(s);
            if (entradaArquivo.is_open()){
                i=0;
                while (entradaArquivo>>s){
                    i++;
                    certo=true;
                    system ("cls");
                    if (s.size()!= (memoria.s_bits+memoria.w_bits)){
                        cout << "* Esse endereco possui "<< s.size() << " bits ! *"<< endl;
                        certo=false;
                    }
                    for (i=0;i<s.size();i++){
                        if (s[i]!='0' and s[i]!='1'){
                            cout << "* Esse endereco nao foi fornecido em binario *" << endl;
                            certo=false;
                            break;
                        }
                    }
                    if (certo)
                        VerificarCache(s,memoria, Cache);
                    else
                        cout << "\n X - O endereco "<< s <<" dessa linha de arquivo ("<< i<<" linha) foi ignorado no mapeamento - X\n" << endl;
                    if (i>=0){
                        PausePersonalizado("\n -> Pressione qualquer tecla para prosseguir para o proximo endereco do arquivo");
                    }else{
                        PausePersonalizado("\n -> Ultimo endereco do arquivo foi lido ! Pressione qualquer tecla para retornar ao menu");
                        system ("cls");
                    }

                }
                //executar a leitura e busca na cache
            }else{
                system ("cls");
                cout << " *** Nao foi possivel abrir o arquivo '"<< s << "'  de enderecos ! *** \n"<< endl;
            }
            //ler arquivo com endereço em cada linha
            }while(!entradaArquivo.is_open()and s!="0");
            entradaArquivo.close();
        }
    }
}

void VerificarCache(string ender, MP& memoria, MemoriaCache& cache){
    //FUNÇÃO QUE RECEBE COMO PARÂMETROS A MP , CACHE E O ENDEREÇO A SER FEITO
    //O MAPEAMENTO. A VARIÁVEL aux VAI RECEBENDO SUBSTRINGS DOS BITS RESPECTIVOS DO ENDEREÇO
    // E EM SEGUIDA, CONVERTIDO EM DECIMAL E ARMAZENADO NAS VARIÁVEIS tagbits, dbits, wbits, sbits .
    // O PRIMEIRO FOR VERIFICA SE A TAG FORNECIDA PELO ENDEREÇO É PARTE DE UMA DAS LINHAS DO CONJUNTO
    // IDENTIFICADO PELOS DBITS DO ENDEREÇO. SE ESTIVER, OK, É SOMADO OS ACERTOS E EXIBIDO AS PALAVRAS DA LINHA.
    // SE A TAG NÃO FOR ENCONTRADA NO FOR, O CONDICIONAL SEGUINTE VERIFICA SE O CONJUNTO ESTÁ COM TODAS AS LINHAS OCUPADAS
    // SE ESTIVER, IRÁ CHAMAR LFU E SUBSTITUIR A LINHA MENOS FREQUENTEMENTE USADA, SENÃO, IRÁ PARA O DESVIO, ONDE SERÁ CRIADA
    // UMA NOVA LINHA COM AS PALAVRAS DO BLOCO DA MEMORIA QUE DEVEM SER MAPEADAS PELO ENDEREÇO FORNECIDO, NA PRIMEIRA LINHA
    //VAZIA QUE ENCONTRAR.
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
    cache.acessos++;
    for (i=0;i<(cache.Conjuntos[dbits].Linhas.size());i++){
        if (cache.Conjuntos[dbits].Linhas[i].tag == tagbits){
            cache.acertos++;
            cache.Conjuntos[dbits].Linhas[i].frequencia++;
            cout << " # O endereco "<< ender << " esta na cache # \n"<< endl;
            cout << " -> Conjunto : " << dbits << "\n -> Linha: "<< i <<"\n"<< endl;
            cout << " >>> Palavras da linha : "<< endl;
            for (j=0;j<pow(2,memoria.w_bits);j++){
                cout << cache.Conjuntos[dbits].Linhas[i].palavrasNaLinha[j].Endereco() << endl;
            }
            return;
        }
    }
    cout << " * O endereco '" << ender<< "' nao estava na cache ! *" << endl;
    if (cache.TamConjunto == cache.Conjuntos[dbits].Linhas.size()){ //testar trocar por i
        id= LFU(cache.Conjuntos[dbits], cache.TamConjunto);
        cache.Conjuntos[dbits].Linhas[id].frequencia=1;
        for (j=0;j<pow(2,memoria.w_bits);j++){
            cache.Conjuntos[dbits].Linhas[id].palavrasNaLinha[j]=memoria.palavras[(sbits*pow(2,memoria.w_bits))+ j];
        }
        cache.substituicoes++;
        cout<< " >>> LFU utilizado <<<"<< endl;
        cout << " * A linha "<<id<<  " foi substituida *\n" << endl;
        cout << " -> Palavras adicionadas : " <<endl;
        for (j = 0; j < pow(2, memoria.w_bits); j++) {
            cout << memoria.palavras[(sbits*pow(2,memoria.w_bits)) + j].Endereco()<< endl;
        }
        cout<< "\n # O bloco '"<< sbits << "' foi adicionado na cache # \n" << endl;
    }else{
        Linha novaLinha;
        novaLinha.tag = tagbits;
        cout << " -> Palavras adicionadas : " <<endl;
        for (j = 0; j < pow(2, memoria.w_bits); j++) {
            novaLinha.palavrasNaLinha.push_back(memoria.palavras[(sbits*pow(2,memoria.w_bits)) + j]);
            cout << memoria.palavras[(sbits*pow(2,memoria.w_bits)) + j].Endereco()<< endl;//imprimir o bloco que foi trazido para a cache;
        }
        cache.Conjuntos[dbits].Linhas.push_back(novaLinha);
        cache.Conjuntos[dbits].Linhas[cache.Conjuntos[dbits].Linhas.size() -1].frequencia=1;
        cout<< "\n # O bloco '"<< sbits << "' foi adicionado na cache # \n" << endl;
    }
}

int LFU(Conjunto c, int tam){
    //FUNÇÃO DE APLICAÇÃO DO ALGORITMO DE SUBSTITUIÇÃO LFU, PARA QUE NO CASO EM QUE
    //O CONJUNTO NA CACHE ESTIVER CHEIO, SUBSTIUIR O MENOS FREQUENTEMENTE ACESSADO
    int i, id=0, menosfrequente=c.Linhas[0].frequencia;
    for (i=0;i<tam; i++){
        if (c.Linhas[i].frequencia<menosfrequente){
            menosfrequente=c.Linhas[i].frequencia;
            id = i;
        }
    }
    return id;
}

bool VerificarTamanhos(int NumeroDeLinhas, int Tamanhos[], int n){
    //FUNÇÃO PARA VERIFICAR E AVISAR AO USUÁRIO SOBRE TAMANHOS INVÁLIDOS QUE
    //PODEM SER FORNECIDOS NO ARQUIVO DE ENTRADA DE TAMANHOS
    //
    bool erro=false;
    if (Tamanhos[0]>256 or Tamanhos[0]<=0){
        cout << "\t*** | O tamanho da memoria, lido na primeira linha do arquivo inserido, possui valor nao permitido ! | ***\n" << endl;
        erro=true;
    }
    if (Tamanhos[1]!=2 and Tamanhos[1]!=4 and Tamanhos[1]!=8){
        cout <<"\t*** | A quantidade de palavras, lido na segunda linha do arquivo, possui valores invalidos ! | ***\n"<< endl;
        erro=true;
    }
    if (Tamanhos[2]> 32 or Tamanhos[2]<=0){
        cout << "\t*** | O tamanho da Cache, lido na terceira linha do arquivo, possui tamanho nao permitido ! | ***\n" << endl;
        erro=true;
    }
    if (Tamanhos[3]<2 or Tamanhos[3]>(NumeroDeLinhas/2)){
        cout << "\t*** | O numero de linhas por conjunto da cache ,lido na quarta linha do Arquivo, esta fora do limite permitido ! | ***"<< endl;
        erro=true;
    }
    return erro;
}
