#include <iostream>
using namespace std;

int main() {
    float preco;
    int codigo;

    cout << "Preco do produto: ";
    cin >> preco;

    cout << "Codigo de pagamento: ";
    cin >> codigo;

    switch(codigo) {
        case 1:
            preco = preco * 0.90;
            break;
        case 2:
            preco = preco * 0.95;
            break;
        case 3:
            preco = preco;
            break;
        case 4:
            preco = preco * 1.10;
            break;
        default:
            cout << "Codigo invalido";
            return 0;
    }

    cout << "Valor a pagar: " << preco;

    return 0;
}
