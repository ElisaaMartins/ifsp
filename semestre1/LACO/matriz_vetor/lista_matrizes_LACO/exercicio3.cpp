// 3 - Crie duas matriz A e B (2x2) e imprima na tela uma matriz C = A + B.

#include <iostream>

using namespace std;

int main () {
	
	const int LINHA = 2;
	const int COLUNA = 2;
	
	int matrizA[LINHA][COLUNA] = {{1, 2}, {1, 2}};
	int matrizB[LINHA][COLUNA] = {{3, 4}, {3, 4}};
	int matrizC[LINHA][COLUNA];
	int i, j; 
	
	
	cout << "MATRIZ A" << endl;
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			cout <<  "\t" << matrizA[i][j];
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "MATRIZ B" << endl;
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			cout <<  "\t" << matrizB[i][j];
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "SOMA DAS MATRIZES" << endl;
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
			
			//matrizC[0][0] = matrizA[0][0] + matrizB[0][0];
			
			//matrizC[0][1] = matrizA[0][1] + matrizB[0][1];
			
			//matrizC[1][0] = matrizA[1][0] + matrizB[1][0];
			
			//matrizC[1][1] = matrizA[1][1] + matrizB[1][1];
			
			cout <<  "\t" << matrizC[i][j];
		}
		cout << endl;
	}
}
