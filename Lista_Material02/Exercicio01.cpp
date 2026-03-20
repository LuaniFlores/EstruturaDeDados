#include <iostream>
using namespace std;

int main() {
    string nome, idade, sintoma;
    char opcao;

    do {
        cout << "Nome: ";
        cin >> nome;

        cout << "Idade: ";
        cin >> idade;

        cout << "Sintoma: ";
        cin >> sintoma;

        cout << "\nPaciente registrado!\n";

        cout << "Deseja cadastrar outro? (s/n): ";
        cin >> opcao;

    } while(opcao == 's' || opcao == 'S');

    return 0;
}
