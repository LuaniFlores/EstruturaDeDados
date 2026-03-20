#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Digite o tamanho: ";
    cin >> N;

    int A[N], B[N], Soma[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = 0; i < N; i++){
        cin >> B[i];
    }

    for(int i = 0; i < N; i++){
        Soma[i] = A[i] + B[i];
    }

    cout << "Vetor Soma:\n";
    for(int i = 0; i < N; i++){
        cout << Soma[i] << " ";
    }

    return 0;
}
