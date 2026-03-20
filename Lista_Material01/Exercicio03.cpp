#include <iostream>
using namespace std;

int main() {
    int A[10], M[10], X;

    for(int i = 0; i < 10; i++){
        cout << "Digite A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "Digite X: ";
    cin >> X;

    for(int i = 0; i < 10; i++){
        M[i] = A[i] * X;
    }

    cout << "Vetor M:\n";
    for(int i = 0; i < 10; i++){
        cout << M[i] << " ";
    }

    return 0;
}
