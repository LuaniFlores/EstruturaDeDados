#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite a idade: ";
    cin >> idade;

    if(idade >= 5 && idade <= 7)
        cout << "Infantil A";
    else if(idade <= 10)
        cout << "Infantil B";
    else if(idade <= 13)
        cout << "Juvenil A";
    else if(idade <= 17)
        cout << "Juvenil B";
    else
        cout << "Senior";

    return 0;
}
