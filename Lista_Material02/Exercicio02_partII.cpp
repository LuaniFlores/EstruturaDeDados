#include <iostream>
using namespace std;

struct Animal {
    string nome;
    string especie;
    int idade;
    float peso;
};

typedef Animal ListaAnimais[10];

int main() {
    ListaAnimais animais;

    for(int i = 0; i < 10; i++){
        cout << "Animal " << i+1 << endl;

        cout << "Nome: ";
        cin >> animais[i].nome;

        cout << "Especie: ";
        cin >> animais[i].especie;

        cout << "Idade: ";
        cin >> animais[i].idade;

        cout << "Peso: ";
        cin >> animais[i].peso;

        cout << endl;
    }

    cout << "\nLista de animais:\n";
    for(int i = 0; i < 10; i++){
        cout << animais[i].nome << " | "
             << animais[i].especie << " | "
             << animais[i].idade << " | "
             << animais[i].peso << " kg\n";
    }

    return 0;
}
