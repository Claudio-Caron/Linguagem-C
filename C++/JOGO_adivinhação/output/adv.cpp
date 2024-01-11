#include <iostream>
using namespace std;
int main()
{
    int chute, certo, cont=0, tentativas;
    char difi;
    certo = 42;
    cout.precision(2);
    cout<<fixed;
    bool maior, verifica;
    cout <<"*************************" << endl;
    cout <<"***JOGO DA ADIVINHACAO***" << endl;
    cout <<"*************************" << endl;
    cout <<" ESCOLHA UM DIFICULDADE PARA INICIAR O JOGO\n(dificuldade baseada em quantidade de tentativas)"<<endl;
    cout <<"_____________________________________" << endl;
    cout <<"|Facil(F)  |  Medio(M)  |  Dificil  |"<<endl;
    cout <<"-------------------------------------"<< endl;
    cin >>difi;
    switch(difi){
    case 'F':
        tentativas=10;
        break;
    case'M':
        tentativas=5;
        break;
    case 'D':
        tentativas=3;
        break;
    default:
        cout<< "Voce nao escolheu uma dificuldade valida!! acionado modo facil"<<endl;
        tentativas=10;
        break;
    }
    while (tentativas)
    {
        cont++;
        cout << "TENTATIVAS RESTANTES: " << tentativas << "\n Insira um valor para chute \n";
        cin >> chute;
        maior = chute > certo;
        verifica = chute == certo;
        if (maior)
        {
            cout << "O Numero digitado e maior que o numero secreto" << endl;
        }
        else if (verifica)
        {
            cout << "PARABENS!!!Voce acertou o numero secreto com " << cont<<" tentativas"<< endl;
            break;
        }
        else
        {
            cout << "O numero inserido e menor que o procurado" << endl;
        }
        tentativas--;
    }
}
