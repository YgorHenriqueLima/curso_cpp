#include <iostream>
#include <cstdio>  // Biblioteca necessária para printf

using namespace std;

int main(){
    int n1, n2,n3;

    n1 = 0;
    n2 = 10;
    n3 = 100;


    n1+=10;
    n2-=n1;
    n3*=2;

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}
