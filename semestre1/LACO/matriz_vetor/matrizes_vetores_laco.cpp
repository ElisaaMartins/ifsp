#include <iostream>

using namespace std;

int main () {
	// declarando um vetor que irá conter necessariamente 10 elementos
	int numeros[9];
	
	// declarando uma matriz de 3 linhas (0,1,2) e 3 colunas (0,1,2)
	int Mnumeros[2][2];
	
	// atribuir valor matriz - manual
	//Mnumeros[1][0] = 33;
	
	
	// percorrendo um vetor
	/*for (int i = 0; i < 10; i++) {
		numeros[i] = i * 2 + 3;
		cout << numeros[i] << endl;
	}*/
	
	// i ==> linha
	// j ==> coluna

	// percorrendo uma matriz - lateralmente
		// percorrendo linhas
	for (int i = 0; i<=2; i++){
			// percorrendo colunas
		for(int j = 0; j <= 2; j++){
			Mnumeros[i][j] = i * j + 2;
			cout << Mnumeros[i][j] << "\t";	
		}
		cout << endl;
	}
	
	cout << endl;
	
	// percorrendo uma matriz - horizontalmente
	// percorrendo linhas
	/*for (int j = 0; j<=2; j++){
			// percorrendo colunas
		for(int i = 0; i <= 2; i++){
			Mnumeros[i][j] = i * j + 2;
			cout << Mnumeros[i][j] << "\t";	
		}
		cout << endl;
	}*/
	
}
