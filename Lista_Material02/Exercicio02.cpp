#include <iostream>
using namespace std;

int main() {
    string titulo, autor;
    int ano;

    while(true) {
        cout << "Titulo: ";
        cin >> titulo;

        if(titulo == "FIM") break;

        cout << "Autor: ";
        cin >> autor;

        cout << "Ano: ";
        cin >> ano;

        cout << "Livro registrado!\n\n";
    }

    return 0;
}
