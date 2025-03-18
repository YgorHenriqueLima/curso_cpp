#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> cartas;

    
    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de Ouro");
    cartas.push("Rei de Paus");
    /*tamanho da pilha*/
    cout << "tamanho da Fila " << cartas.size() << "\n";
    cout << "primeira carta: " << cartas.front() << "\n";
    cout << "Ultima carta: " << cartas.back() << "\n";
    return 0;
}