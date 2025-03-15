#include <iostream>
using namespace std;

int main(){
    float n1, n2;
    int opcao;

    cout << "[MENU]\n[ 1 ]soma\n[ 2 ]subtração\n[ 3 ]multiplicação\n[ 4 ]divisão\n\n";
    
    cout << "Digite uma opção de operação matemática: ";
    cin >> opcao;

    cout << "digite o primeiro valor: ";
    cin >> n1;
    cout << "digite o segundo valor: ";
    cin >> n2;

    float op;
    switch (opcao)
    {
        case 1:
            op = n1 + n2;
            break;
        case 2:
            op = n1 - n2;
            break;
        case 3:
            op = n1 * n2;
            break;
        case 4:
            op = n1 / n2;
            break;
        default:
            break;
    }
    cout << "o resultado do calculo foi : " << op << "\n";


    return 0;
}