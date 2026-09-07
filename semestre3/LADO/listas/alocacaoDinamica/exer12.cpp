/* Implemente um programa em que obtenha do teclado o tamanho (inteiro) de um
vetor, após isso aloque dinamicamente um array de com o tamanho obtido e então
leia do teclado a os números digitados pelo usuário e armazene no novo vetor
alocado. Exiba os valores contidos no array dinâmico. */

#include <iostream>

using namespace std;

int main(){
    int tamanho;

    cout << "Qual tamanho do vetor? ";
    cin >> tamanho;
    cout << endl;

    int* vetor = new int[tamanho];

    cout << "Preenchendo o vetor" << endl;
    for(int i = 0; i < tamanho; i++){
        cout << "Elemento " << i << ": ";
        cin >> vetor[i];
    }

    cout << endl;

    cout << "==== Valores do vetor ====" << endl;
    for(int i = 0; i < tamanho; i++){
        cout << vetor[i] << " ";
    }

    cout << endl;

    delete[] vetor;
}
