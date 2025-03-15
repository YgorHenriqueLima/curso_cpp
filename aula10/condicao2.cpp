#include <iostream>
using namespace std;

int main(){
    float n1, n2;
    cout << "digite o valor da nota 1: ";
    cin >> n1;
    cout << "digite o valor da nota 2: ";
    cin >> n2;

    float media = (n1 + n2) / 2;
    cout << "a média foi " << media << "\n\n";
    

    if (media >= 6.0){
        cout << "Aprovado" << "\n\n";
    }else if(media >= 5.0 && media < 6.0){
        cout << "Recuperação" << "\n\n";
    }else if(media < 5.0){
        cout << "Reprovado" << "\n\n";
    }
    return 0;
}