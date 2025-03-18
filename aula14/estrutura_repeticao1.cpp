#include <iostream>
using namespace std;

int main (){
    int cont=0;

    while(cont< 20){
        cout << "canal fessor bruno - " << cont << "\n\n";
        if(cont == 10){
            break;
        }
        cont++;
    }
    
    cout << "rotina finalizada";
    return 0;
}