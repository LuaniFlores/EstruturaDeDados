#include <iostream>
using namespace std;

enum Cores {VERMELHO, VERDE, AZUL};
typedef Cores TipoCor;

int main() {
    int opcao;
    TipoCor cor;

    cout << "Escolha uma cor:\n";
    cout << "0 - Vermelho\n1 - Verde\n2 - Azul\n";
    cin >> opcao;

    cor = (TipoCor)opcao;

    cout << "Cor escolhida: ";

    switch(cor){
        case VERMELHO: cout << "Vermelho"; break;
        case VERDE: cout << "Verde"; break;
        case AZUL: cout << "Azul"; break;
        default: cout << "Invalida";
    }

    return 0;
}
