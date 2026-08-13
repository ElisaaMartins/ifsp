/* 2. Faça um programa que leia um número N:
    Crie dinamicamente e leia um vetor de inteiro de N posições;
    Leia um número inteiro X e conte e mostre os múltiplos desse número que
    existem no vetor.
*/

#include <iostream>

using namespace std;

int main() {
    int tamanho;
    int* v = new int[tamanho];
    int x;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    // leitura vetor
    for (int i = 0; i < tamanho; i++) {
        cout << "Valor " << (i + 1) << ": ";
        cin >> v[i];
    }


    cout << "Entre com um numero inteiro para buscar seus multiplos: ";
    cin >> x;

    int qtdMultiplos = 0;
    for (int i = 0; i < tamanho; i++) {
        if (v[i] % x == 0) {
            qtdMultiplos++;
        }
     }

    cout << endl;

    cout << "Total de multiplos encontrados: " << qtdMultiplos << endl;

    delete[] v;

    return 0;
}


