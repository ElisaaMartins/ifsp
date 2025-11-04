// matiz 3x3 que mostra só os pares
#include <iostream>
using namespace std;

int main() {
    int mat[3][3];
    int l, c;
    int totPar = 0;

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            cout << "Digite o valor da posicao [" << l + 1 << "," << c + 1 << "]: ";
            cin >> mat[l][c];
        }
    }

	cout << endl;

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            //cout << "\t" << mat[l][c] << "\t";
            if (mat[l][c] % 2 == 0) {
            	cout << "{" << mat[l][c] << "}" << "\t";
				totPar = totPar + 1;	
			}
			else { 
				cout << mat[l][c] << "\t";
			}
        }
        cout << endl;
    }

	cout << "Ao todo foram digitados " << totPar << " valores PARES" << endl;

}
