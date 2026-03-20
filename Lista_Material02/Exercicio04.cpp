#include <iostream>
using namespace std;

int main() {
    string nomes[100];
    float notas[100];
    int i = 0;
    char opcao;

    do {
        cout << "Nome do estudante: ";
        cin >> nomes[i];

        cout << "Nota final: ";
        cin >> notas[i];

        if(notas[i] >= 6)
            cout << "Aprovado\n";
        else
            cout << "Reprovado\n";

        i++;

        cout << "Deseja continuar? (s/n): ";
        cin >> opcao;

    } while(opcao == 's' || opcao == 'S');

    return 0;
}
