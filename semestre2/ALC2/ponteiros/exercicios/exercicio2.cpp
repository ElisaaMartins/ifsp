/* Escreva um programa que contenha duas variáveisinteiras.
Leia essas variáveis do teclado.
Em seguida,compare seus endereços e exiba o conteúdo do maiorendereço. */

#include <iostream>

using namespace std;

int main(){
    int x, y;
    int *a, *b;

    cout << "digite um valor inteiro x: ";
    cin >> x;

    cout << "digite um valor inteiro y: ";
    cin >> y;

    a = &x;
    b = &y;

    if (a < b){
        cout << "o valor de memoria maior e: " << *a << endl;
        cout << "conteudo: " << a << endl;
    }
    else {
        cout << "o valor de memoria maior e: " << *b << endl;
        cout << "conteudo: " << b << endl;
    }
}
