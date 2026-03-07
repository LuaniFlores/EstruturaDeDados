#include <iostream>
using namespace std;

int main() {

    float altura;
    float maior=0, menor=999;

    for(int i=1;i<=10;i++){
        cout << "Altura do aluno " << i << ": ";
        cin >> altura;

        if(altura > maior)
            maior = altura;

        if(altura < menor)
            menor = altura;
    }

    cout << "Maior altura: " << maior << endl;
    cout << "Menor altura: " << menor << endl;

    return 0;
}
