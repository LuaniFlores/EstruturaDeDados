#include <iostream>
using namespace std;

int main() {

    int n;

    do{
        cout << "Digite numero entre 1 e 10: ";
        cin >> n;
    }while(n < 1 || n > 10);

    cout << "Numero valido";

    return 0;
}
