/* Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e
imprima o vetor lido. */

#include <iostream>

using namespace std;

int main(){
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int* vetorNumeros = new int[tamanho];

    for(int i = 0; i < tamanho; i++) {
        cout << "Digite o numero " << (i + 1) << ": ";
        cin >> vetorNumeros[i];
     }


     cout << endl;

     cout << "\tLendo o vetor: ";
     for(int i = 0; i < tamanho; i++) {
        cout << vetorNumeros[i] << " ";
     }

     delete[] vetorNumeros;

     return 0;
}
