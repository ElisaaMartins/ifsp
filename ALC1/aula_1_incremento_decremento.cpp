#include <iostream>

using namespace std;
int main(){
    int x;

    x = 0; //x � inicializado com 0

    cout << "x = " << x++ << endl; // operador p�s-incremento

    cout << "x = " << x << endl; // primeiro usa x depois incrementa

    cout << "x = " << ++x << endl; // operador de incremento prefixado

    cout << "x = " << x << endl; // x � incrementado depois usado

    cout << "x = " << x-- << endl;

    cout << "x = " << x << endl;

    cout << "x = " << --x << endl;

    cout << "x = " << x << endl;

    return 0;
}
