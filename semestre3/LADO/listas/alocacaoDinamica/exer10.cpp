/*  Faça um programa que leia dois números N e M:
    • Crie e leia uma matriz de inteiros N x M;
    • Localize os três maiores números de uma matriz
      e mostre a linha e a coluna onde estão.
*/


#include <iostream>

using namespace std;

int main(){
    int N, M;

    cout << "Qts linhas na matriz: ";
    cin >> N;

    cout << "Qts colunas na matriz: ";
    cin >> M;

    cout << endl;

    int** matriz = new int*[N];

    for(int i = 0; i < N; i++){
        matriz[i] = new int[M];
    }

    cout << "==== MATRIZ ====" << endl;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << endl;

    // localizar os maiores numeros e mostrar linha e coluna
    int maior1 = INT_MIN, l1 = 0, c1 = 0;
    int maior2 = INT_MIN, l2 = 0, c2 = 0;
    int maior3 = INT_MIN, l3 = 0, c3 = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int valorAtual = matriz[i][j];

            // comparacoes
            if(valorAtual > maior1) {
                maior3 = maior2; l3 = l2; c3 = c2;
                maior2 = maior1; l2 = l1; c2 = c1;
                maior1 = valorAtual; l1 = i; c2 = j;
            }

            else if(valorAtual > maior2){
                maior3 = maior2; l3 = l2; c3 = c2;
                maior2 = valorAtual; l3 = i; c2 = j;
            }

            else if(valorAtual > maior3){
                maior3 = valorAtual; l3 = i; c3 = j;
            }
        }
    }

    // matriz
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

    cout << endl;

    // imprimindo
    cout << "==== OS 3 MAIORES ====" << endl;
    cout << "1o - " << maior1 << endl;
    cout << "\tLINHA = " <<l1 << " | COLUNA = " << c1 << endl;

    cout << "2o - " << maior2 << endl;
    cout << "\tLINHA = " <<l2 << " | COLUNA = " << c2 << endl;

    cout << "3o - " << maior3 << endl;
    cout << "\tLINHA = " <<l3 << " | COLUNA = " << c3 << endl;

    for(int i = 0; i < N; i++){
        delete[] matriz[i];
    }

    delete[] matriz;
}


