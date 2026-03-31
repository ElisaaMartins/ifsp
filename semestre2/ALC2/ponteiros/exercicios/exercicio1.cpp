/* Escreva um programa que declare um inteiro, um reale um char, e ponteiros para inteiro, real, e char.
Associe as variáveis aos ponteiros (use &).
Modifiqueos valores de cada variável usando os ponteiros.Imprima os valores das variáveis antes e apósa modificação */

#include <iostream>

using namespace std;

int main(){
    int x;
    float y;
    char z;

    int *a;
    float *b;
    char *c;

    x = 10;
    y = 20.5;
    z = 'A';

    a = &x;
    b = &y;
    c = &z;

    cout << "antes de modificar" << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    cout << endl;

    x = 15;
    y = 25.5;
    z = 'B';

    cout << "depois de modificar" << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}
