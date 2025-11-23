/* 6 - Crie uma matriz A (3x3) e imprima na tela se a mesma e uma matriz triangular
superior ou nao.*/

#include <iostream>

using namespace std;

int main () {
		
	const int LINHA = 3;
	const int COLUNA = 3;
	
	int matriz[LINHA][COLUNA] = {{1, 2, 3}, {1, 4, 0}, {0, 0, 6}};

	bool triangular = true;
	int i, j;
	
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			
			/*  matriz triangular =>
			1 - abaixo da matriz principal
			2 - o elemento diferente de  0 */
			
			if ((i > j) && (matriz[i][j] != 0)){				
				triangular = false;
				break;
			}
		}
	}
	
	cout << ((triangular == true) ? "A matriz eh triangular" : "A matriz nao eh triangular") << endl;
	
	cout << endl;
	cout << "MATRIZ" << endl;
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			cout <<  "\t" << matriz[i][j];
		}
		cout << endl;
	}
}
