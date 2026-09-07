/* Crie um programa que contenha um array de float contendo 10 elementos.
Imprima o endereço de cada posiçao desse array.*/


#include <iostream>

using namespace std;

main (){
    float array[10];

    for (int i = 0; i < 10; i++){
        cout << "Digite um valor: ";
        cin >> array[i];
    }

    system("cls");

    for (int i = 0; i < 10; i++){
        cout << "Endereco " << i+1 << " -> " << &array[i] << endl;
    }

}
