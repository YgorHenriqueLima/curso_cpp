#include <iostream>
using namespace std;

int main(){

    enum armas{fuzil=100, revolver=8, rifle=200, escopeta=6};
    armas armaSel = revolver;

    cout << armaSel << "\n";

    return 0;
}