#include <iostream>
using namespace std;

int main() {
    float temp[365], soma = 0, media;
    float menor, maior;
    int abaixo = 0;

    for(int i = 0; i < 365; i++){
        cin >> temp[i];
        soma += temp[i];

        if(i == 0){
            menor = maior = temp[i];
        } else {
            if(temp[i] < menor) menor = temp[i];
            if(temp[i] > maior) maior = temp[i];
        }
    }

    media = soma / 365;

    for(int i = 0; i < 365; i++){
        if(temp[i] < media)
            abaixo++;
    }

    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;
    cout << "Media: " << media << endl;
    cout << "Dias abaixo da media: " << abaixo << endl;

    return 0;
}
