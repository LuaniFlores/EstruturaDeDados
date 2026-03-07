#include <iostream>
using namespace std;

int main() {
    int idade, op;
    int total = 0;
    int otimo=0, bom=0, regular=0, ruim=0;
    int somaIdade = 0;

    cout << "Digite a idade (negativa para encerrar): ";
    cin >> idade;

    while(idade >= 0) {
        cout << "Opiniao (1=Otimo,2=Bom,3=Regular,4=Ruim): ";
        cin >> op;

        somaIdade += idade;
        total++;

        switch(op){
            case 1: otimo++; break;
            case 2: bom++; break;
            case 3: regular++; break;
            case 4: ruim++; break;
        }

        cout << "Digite a idade (negativa para encerrar): ";
        cin >> idade;
    }

    cout << "Total pessoas: " << total << endl;
    cout << "Media idade: " << (float)somaIdade/total << endl;

    cout << "Otimo: " << (otimo*100.0)/total << "%" << endl;
    cout << "Bom: " << (bom*100.0)/total << "%" << endl;
    cout << "Regular: " << (regular*100.0)/total << "%" << endl;
    cout << "Ruim: " << (ruim*100.0)/total << "%" << endl;

    return 0;
}
