#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    int valor = 2; // começa em 2

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = valor;
            valor += 2; // incrementa de 2 em 2
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

