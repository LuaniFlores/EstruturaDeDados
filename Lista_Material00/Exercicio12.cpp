#include <iostream>
using namespace std;

int main() {

    int a,b,c;

    cout << "Digite 3 numeros: ";
    cin >> a >> b >> c;

    int maior = a;

    if(b > maior) maior = b;
    if(c > maior) maior = c;

    cout << "Maior: " << maior;

    return 0;
}
