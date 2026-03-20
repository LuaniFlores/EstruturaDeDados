#include <iostream>
using namespace std;

int main() {
    string nomes[10], busca;
    bool achou = false;

    for(int i = 0; i < 10; i++){
        cout << "Digite um nome: ";
        cin >> nomes[i];
    }

    cout << "Digite um nome para buscar: ";
    cin >> busca;

    for(int i = 0; i < 10; i++){
        if(nomes[i] == busca){
            achou = true;
            break;
        }
    }

    if(achou) cout << "ACHEI\n";
    else cout << "NAO ACHEI\n";

    return 0;
}
