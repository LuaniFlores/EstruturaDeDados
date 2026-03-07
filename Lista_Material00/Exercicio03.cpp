#include <iostream>
using namespace std;

int main() {
    float horas, salarioMin, valorHora, salarioBruto, imposto, salarioFinal;

    cout << "Horas trabalhadas: ";
    cin >> horas;

    cout << "Salario minimo: ";
    cin >> salarioMin;

    valorHora = salarioMin / 2;
    salarioBruto = horas * valorHora;
    imposto = salarioBruto * 0.03;
    salarioFinal = salarioBruto - imposto;

    cout << "Salario a receber: " << salarioFinal;

    return 0;
}
