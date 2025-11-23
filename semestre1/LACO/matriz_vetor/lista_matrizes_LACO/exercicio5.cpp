// 5 - Crie uma matriz A (3x3) e calcule sua determinante.
#include <iostream>

using namespace std;

int main () {
	
	const int LINHA = 3;
	const int COLUNA = 3;
	
	int matriz[LINHA][COLUNA] = {{2, 3, -5}, {4, -2, 0}, {5, 8, 1}};
	int i, j, determinante; 
	
	
	cout << "MATRIZ" << endl;
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			cout <<  "\t" << matriz[i][j];
		}
		cout << endl;
	}
	
	cout << endl;
	
	determinante =  
					((matriz[0][0] * matriz[1][1] * matriz[2][2]) + 
					(matriz[0][1] * matriz[1][2] * matriz[2][0]) + 
					(matriz[0][2] * matriz[1][0] * matriz[2][1])) 
					- 1*
					((matriz[0][2] * matriz[1][1] * matriz[2][0]) + 
					(matriz[0][0] * matriz[1][2] * matriz[2][1]) + 
					(matriz[0][1] * matriz[1][0] * matriz[2][2]));

	
	cout <<  "O determinante eh: " << determinante;

}
