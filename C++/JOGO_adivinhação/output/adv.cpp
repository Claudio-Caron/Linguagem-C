#include <iostream>
using namespace std;
int main (){

    int chute, certo=42, tentativas=3;
    bool verifica=chute==certo;
    bool menor=chute<certo;
    cout<<"*************************"<< endl;
    cout<<"***JOGO DA ADIVINHACAO***"<< endl;
    cout<<"*************************"<< endl;
    while(tentativas){
    cout<<"TENTATIVAS RESTANTES: "<< tentativas <<"\n Insira um valor para chute"<< endl;
    cin>>chute;
    if (menor){
        cout<< "O Numero digitado e menor que o numero secreto"<<endl;
        tentativas--;
    }else if(verifica){
        cout<<"PARABENS!!!Voce acertou o numero secreto:/"<<endl;
    }else{
        cout<<"O numero inserido e maior que o procurado"<<endl;
        tentativas--;
    }

}
}
