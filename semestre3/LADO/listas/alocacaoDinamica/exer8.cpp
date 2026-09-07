/* Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de
dimensões definidas pelo usuário e a leia.
Em seguida, implemente uma função que receba um valor,
    retorne 1 caso o valor esteja na matriz ou
    retorne 0 caso não esteja na matriz.
    */

#include <iostream>

using namespace std;

// int** pontei duplo - ponteiro para ponteiro de inteiros
int buscaValor(int** matriz, int linhas, int colunas, int valorBuscado){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(matriz[i][j] == valorBuscado){
                return 1; // quando encontra o valor
            }
        }
    }
    return 0; // quando nao encontra o valor
}


int main(){
    int linhas, colunas, valor;

    cout << "Qts linhas na matriz: ";
    cin >> linhas;

    cout << "Qts colunas na matriz: ";
    cin >> colunas;

    cout << endl;

    int** matriz = new int*[linhas];

    for(int i = 0; i < linhas; i++){
        matriz[i] = new int[colunas];
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

    cout << endl;

    // chamar funcao de busca
    cout << "Que valor deseja buscar: ";
    cin >> valor;

    cout << endl;

    if(buscaValor(matriz, linhas, colunas, valor) == 1){
        cout << "1 -  o valor ESTA na matriz" << endl;
    } else {
        cout << "0 - o valor NAO ESTA na matriz" << endl;
    }

    for(int i = 0; i < linhas; i++){
        delete[] matriz[i];
    }

    delete[] matriz;
}
