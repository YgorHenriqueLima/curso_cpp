#include <iostream>
using namespace std;

int main(){
    int num = 10;
    cout << num << "\n\n";
  
    // primeira forma:
    num = num * -1;
    cout << num << "\n\n";
    
     /**
     * segunda forma porém o valor não fica salvo em uma variável, o valor fica negativo momentâneamente
     */
    cout << -num << "\n\n";
    return 0;
}