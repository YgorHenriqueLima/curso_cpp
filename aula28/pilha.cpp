#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> cartas;

    
    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de Ouro");
    cartas.push("Rei de Paus");
    /*tamanho da pilha*/
    cout << "tamanho da pilha " << cartas.size() << "\n";
    /*retornando elemento do topo*/
    cout << "carta do topo " << cartas.top() << "\n";
    /*retirando elementos */
    cartas.pop();

    cout << "Nova carta do topo: " << cartas.top() << "\n";
    if(cartas.empty()){
        cout << "pilha vazia\n\n";
    }else{
        cout << "pilha com cartas\n\n";
    }

    while(!cartas.empty()){
        cartas.pop();
    }

    
    cout << "tamanho da pilha " << cartas.size() << "\n";



    return 0;
}