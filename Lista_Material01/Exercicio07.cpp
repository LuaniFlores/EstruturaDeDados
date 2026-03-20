#include <iostream>
using namespace std;

int main() {
    int v[10];
    int *p;

    for(int i = 0; i < 10; i++){
        cin >> v[i];
    }

    p = v;

    cout << "Ordem normal:\n";
    for(int i = 0; i < 10; i++){
        cout << *(p + i) << " ";
    }

    cout << "\nOrdem inversa:\n";
    for(int i = 9; i >= 0; i--){
        cout << *(p + i) << " ";
    }

    return 0;
}
