// matriz de 4D
#include <iostream>
using namespace std;

int main() {
    int mat[4][4];
    int l, c, soma = 0, produto = 1, maior;

    // leitura da matriz
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            cout << "Digite o valor da posicao [" << l + 1 << "," << c + 1 << "]: ";
            cin >> mat[l][c];
            if (l == c) {
            	soma = soma + mat[l][c];
			}
        }
    }

    cout << endl;
    
	// impressão da matriz
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            cout << "\t" << mat[l][c] << "\t";
        }
        cout << endl;
    }
    
    cout << endl;
    
    // multiplicacao 2linha
    for (c = 0; c < 4; c++) {
    	produto *= mat[1][c];
    }
    
    // maior valor 3coluna
    for (l = 0; l < 4; l++) {
        if (mat[l][2] > maior) {
			maior = mat[l][2];
		}
    }
    
    //soma dos valores da diagonal principal
    cout << "O valor da soma da diagonal principal eh " << soma << endl;
    
    // multiplicacao 2linha
    cout << "O produto dos valores da segunda linha eh " << produto << endl;
    
    // maior da 3coluna
    cout << "O maior valor da terceira coluna eh  " << maior << endl;
    

}
