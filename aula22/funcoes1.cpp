#include <iostream>
using namespace std;
/*funções*/
void texto();
void somar(int n1, int n2);
int multiplicar(int n1, int n2);
void tr(string tra[4]);

int main(){
    string transp[] = {"carro","moto","barco","aviao"};

    
    texto();
    somar(6,70);
    int m = multiplicar(10,2);
    cout << "a multiplicação foi " << m << "\n\n";
    
    tr(transp);
    return 0;
}

void texto(){
    cout << "\nCanal Fessor Bruno\n";
}

void somar(int n1, int n2){ 
    cout << " a soma foi " << n1+n2 << "\n\n";
}

int multiplicar(int n1, int n2){
    return n1*n2;
}

void tr(string tra[4]){
    for(int i=0;i < 4; i++){
        cout << tra[i] << "\n";
    }
}