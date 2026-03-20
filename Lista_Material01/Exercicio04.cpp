#include <iostream>
using namespace std;

int main() {
    int v[20];

    for(int i = 0; i < 20; i++){
        cin >> v[i];
    }

    // Ordenação (Bubble Sort)
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19 - i; j++){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }

    cout << "Ordem crescente:\n";
    for(int i = 0; i < 20; i++){
        cout << v[i] << " ";
    }

    return 0;
}
