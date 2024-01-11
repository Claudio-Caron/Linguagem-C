#include <iostream>
using namespace std;
int main()
{
    int chute, certo, tentativas = 3;
    certo = 42;
    bool maior, verifica;
    cout << "*************************" << endl;
    cout << "***JOGO DA ADIVINHACAO***" << endl;
    cout << "*************************" << endl;
    while (tentativas)
    {
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
            cout << "PARABENS!!!Voce acertou o numero secreto:/" << endl;
        }
        else
        {
            cout << "O numero inserido e menor que o procurado" << endl;
        }
        tentativas--;
    }
}
