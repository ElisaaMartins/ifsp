/* Faça um programa que leia dois números N e M:
    • Crie e leia uma matriz N x M de inteiros;
    • Crie e construa uma matriz transposta M x N de inteiros.
    • Mostre as duas matrizes
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

    cout << "Preenchendo matriz original" << endl;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << endl;

    // matriz transposta
    int** matrizTransposta = new int*[M];

    for(int i = 0; i < M; i++){
        matrizTransposta[i] = new int[N];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    cout << endl;

    // matriz normal=
    cout << "==== MATRIZ ORIGINAL ====" << endl;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

    cout << endl;

    // matriz tranposta
    cout << "==== MATRIZ TRANSPOSTA ====" << endl;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cout << "[" << matrizTransposta[i][j] << "]";
        }
        cout << endl;
    }


    for(int i = 0; i < N; i++){
        delete[] matriz[i];
    }

    delete[] matriz;


    for(int i = 0; i < M; i++){
        delete[] matrizTransposta[i];
    }

    delete[] matrizTransposta;
}
