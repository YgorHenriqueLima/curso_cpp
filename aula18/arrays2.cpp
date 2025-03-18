#include <iostream>
using namespace std;

int main(){
    string nomes[3];
    int idades[3];

    for(int i = 0; i < 3; i++){
        cout << "Digite seu nome: ";
        cin >> nomes[i];
        cout << "Digite sua idade: ";
        cin >> idades[i];
    }
    cout << "\nlista de pessoas\n";
    for(int i = 0; i < 3; i++){
        cout << nomes[i] << " - " << idades[i] << " anos \n";
    }
    
    return 0;
}