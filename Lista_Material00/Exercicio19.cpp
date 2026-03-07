#include <iostream>
using namespace std;

int main() {

    float nota, soma=0;
    int total=0;

    cout << "Digite a nota (-1 para sair): ";
    cin >> nota;

    while(nota >= 0){
        soma += nota;
        total++;

        cin >> nota;
    }

    cout << "Media: " << soma/total;

    return 0;
}
