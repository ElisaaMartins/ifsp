#include <iostream>

using namespace std;
int main(){
    int x;

    x = 0; //x é inicializado com 0

    cout << "x = " << x++ << endl; // operador pós-incremento

    cout << "x = " << x << endl; // primeiro usa x depois incrementa

    cout << "x = " << ++x << endl; // operador de incremento prefixado

    cout << "x = " << x << endl; // x é incrementado depois usado

    cout << "x = " << x-- << endl;

    cout << "x = " << x << endl;

    cout << "x = " << --x << endl;

    cout << "x = " << x << endl;

    return 0;
}
