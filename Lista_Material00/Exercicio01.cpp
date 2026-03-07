#include <iostream>
using namespace std;

int main() {
    float peso, altura, imc;

    cout << "Digite o peso: ";
    cin >> peso;

    cout << "Digite a altura: ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "IMC = " << imc << endl;

    if(imc < 20)
        cout << "Abaixo do peso";
    else if(imc < 25)
        cout << "Peso ideal";
    else
        cout << "Peso acima";

    return 0;
}
