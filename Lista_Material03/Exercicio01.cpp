#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int v[n];

    // Entrada de dados
    for(int i = 0; i < n; i++){
        cout << "v[" << i << "]: ";
        cin >> v[i];
    }

    // Bubble Sort - 3ª versão (comparando i com i+1)
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(v[j] < v[j + 1]){ // troca para ordem DECRESCENTE
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    // Saída
    cout << "\nVetor em ordem decrescente:\n";
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}
