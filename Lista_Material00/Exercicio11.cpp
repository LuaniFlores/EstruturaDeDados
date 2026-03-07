#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Digite um numero: ";
    cin >> n;

    if(n % 2 == 0)
        cout << "Par";
    else
        cout << "Impar";

    return 0;
}
