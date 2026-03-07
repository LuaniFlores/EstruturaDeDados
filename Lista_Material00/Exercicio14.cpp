#include <iostream>
using namespace std;

int main() {

    int op;

    do{
        cout << "\n1 - Ola\n2 - Tchau\n3 - Sair\n";
        cin >> op;

        switch(op){
            case 1: cout << "Ola!\n"; break;
            case 2: cout << "Tchau!\n"; break;
        }

    }while(op != 3);

    return 0;
}
