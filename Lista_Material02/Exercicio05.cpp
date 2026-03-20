#include <iostream>
using namespace std;

int main() {
    string prato;
    int quantidade;
    float preco;

    while(true) {
        cout << "Nome do prato: ";
        cin >> prato;

        cout << "Quantidade: ";
        cin >> quantidade;

        cout << "Preco total: ";
        cin >> preco;

        cout << "Pedido registrado!\n";

        if(preco == 0) break;
    }

    return 0;
}
