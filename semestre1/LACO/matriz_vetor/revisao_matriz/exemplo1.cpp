// matriz 3x2
#include <iostream>
using namespace std;

int main() {
    int mat[3][2];
    int l, c;

    // leitura da matriz
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 2; c++) {
            cout << "Digite o valor da posicao [" << l + 1 << "," << c + 1 << "]: ";
            cin >> mat[l][c];
        }
    }

    // impressão da matriz
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 2; c++) {
            cout << "\t" << mat[l][c] << "\t";
        }
        cout << endl;
    }

}
