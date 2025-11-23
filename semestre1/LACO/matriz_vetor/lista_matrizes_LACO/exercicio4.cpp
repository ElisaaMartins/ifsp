// 4 - Crie uma matriz A (2x2) e calcule sua determinante.
#include <iostream>

using namespace std;

int main () {
	
	const int LINHA = 2;
	const int COLUNA = 2;
	
	int matriz[LINHA][COLUNA] = {{2, 3}, {15, -5}};
	int i, j, determinante; 
	
	
	cout << "MATRIZ" << endl;
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			cout <<  "\t" << matriz[i][j];
		}
		cout << endl;
	}
	
	cout << endl;
	determinante = matriz[0][0] * matriz[1][1] -1 * matriz[0][1] * matriz[1][0];
	
	cout <<  "O determinante eh: " << determinante;

}
