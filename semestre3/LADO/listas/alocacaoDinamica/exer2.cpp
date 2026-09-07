/* Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e
mostre quantos dos números são pares e quantos são ímpares */

#include <iostream>

using namespace std;

int main(){
    int tamanho, pares = 0, impares = 0;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int* vetorNumeros = new int[tamanho];

    for(int i = 0; i < tamanho; i++) {
        cout << "Digite o numero " << (i + 1) << ": ";
        cin >> vetorNumeros[i];
     }


     cout << endl;

     for(int i = 0; i < tamanho; i++) {
        if(vetorNumeros[i] % 2 == 0){
            pares++;

        }
        else {
            impares++;
        }
     }

     cout << "\tPARES: " << pares;
     cout << "\tIMPARES: " << impares;

     delete[] vetorNumeros;

     return 0;
}
