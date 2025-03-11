#include <iostream>
using namespace std;

int main(){
    // TIPO NOME;
    // TIPO NOME = VALOR PADRÃO;
    int vidas;
    char letra;
    double dinheiro;
 // float valores_decimais2 = 2.5;
    bool vivo = true;
    string nome;

    cout << "digite o nome do Guerreiro(a): ";
    cin >> nome;

    cout << "Digite o número de vidas: ";
    cin >> vidas;

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Digite quantidade de dinheiro: ";
    cin >> dinheiro;


    cout << vidas << "\n";
    cout << letra << "\n";
    cout << dinheiro << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";

    return 0;
}