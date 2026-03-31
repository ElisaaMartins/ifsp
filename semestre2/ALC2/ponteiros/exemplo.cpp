#include <iostream>

using namespace std;

int main(){
    /*int x,y;

    x = 10;
    y = 9;
    x = y;

    y = 15;

    cout << x << endl; // estático - passagem por valor*/



    int *x; // declarar ponteiro
    int y;

    //*x = 10;
    y = 9;
    x = &y; // compartilhar valor de memoria

    y = 15;

    cout << x << endl; //imprime endereço memoria
    //cout << *x << endl; //imprime valor


}

