/* Construa um programa que leia o número de linhas e de colunas de uma matriz
de números reais, aloque espaço dinamicamente para esta e a inicialize com
valores fornecidos pelo usuário.
Ao final, o programa deverá retornar a matriz na saída padrão com layout apropriado */

#include <iostream>

using namespace std;

int main(){
    int linhas, colunas;

    cout << "Qts linhas na matriz: ";
    cin >> linhas;

    cout << "Qts colunas na matriz: ";
    cin >> colunas;

    cout << endl;

    double** matriz = new double*[linhas];

    for(int i = 0; i < linhas; i++){
        matriz[i] = new double[colunas];
    }

    cout << "==== MATRIZ ====" << endl;
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << endl;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

    for(int i = 0; i < linhas; i++){
        delete[] matriz[i];
    }

    delete[] matriz;
}
