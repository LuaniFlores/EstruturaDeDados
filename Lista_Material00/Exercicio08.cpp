#include <iostream>
using namespace std;

int main() {

    int voto;
    int cand1=0, cand2=0, cand3=0, cand4=0;

    for(int i=0;i<20;i++){
        cout << "Digite o voto (1-4): ";
        cin >> voto;

        switch(voto){
            case 1: cand1++; break;
            case 2: cand2++; break;
            case 3: cand3++; break;
            case 4: cand4++; break;
        }
    }

    cout << "Candidato 1: " << cand1 << endl;
    cout << "Candidato 2: " << cand2 << endl;
    cout << "Candidato 3: " << cand3 << endl;
    cout << "Candidato 4: " << cand4 << endl;

    return 0;
}

