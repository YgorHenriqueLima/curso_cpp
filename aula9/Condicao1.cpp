#include <iostream>
using namespace std;

int main(){
    string dia;
    cout << "o dia está fazendo sol ou chuva?: ";
    cin >> dia; 


    if(dia == "sol"){
        cout << "vou a praia" << "\n";
    }else{
        cout << "vou ao cinema " << "\n";
    }

    return 0;
}