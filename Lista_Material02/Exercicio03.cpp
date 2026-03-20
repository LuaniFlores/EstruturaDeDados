#include <iostream>
using namespace std;

int main() {
    float roteiro, atuacao, efeitos, media;
    char opcao;

    do {
        cout << "Nota roteiro: ";
        cin >> roteiro;

        cout << "Nota atuacao: ";
        cin >> atuacao;

        cout << "Nota efeitos: ";
        cin >> efeitos;

        media = (roteiro + atuacao + efeitos) / 3;

        cout << "Media do filme: " << media << endl;

        cout << "Deseja avaliar outro filme? (s/n): ";
        cin >> opcao;

    } while(opcao == 's' || opcao == 'S');

    return 0;
}
