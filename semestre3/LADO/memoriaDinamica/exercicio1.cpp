/* 1. Crie um programa que:
    (a) Aloque dinamicamente um array de 5 números inteiros,
    (b) Peça para o usuário digitar os 5 números no espaço alocado,
    (c) Mostre na tela os 5 números,
    (d) Libere a memória alocada
*/

#include <iostream>

using namespace std;

int main() {

    int* vetorNumeros = new int[5]; // responde o item a - array dinamico de 5 numeros

    for(int i = 0; i < 5; i++) {
        cout << "Digite o numero " << (i + 1) << ": "; // item b
        cin >> vetorNumeros[i];
     }

     cout << "\nOs numeros digitados foram:" << endl;

     for(int i = 0; i < 5; i++) {
        cout << vetorNumeros[i] << " "; // item c
     }

     cout << endl;

     delete[] vetorNumeros; // item d

     return 0;
}
