/*2 - Crie uma matriz A (3x3) e para para o usuario informar os valores. Em
seguida, imprima na tela os elementos da diagonal principal.*/

#include <iostream>

using namespace std;

int main () {
	const int LINHA = 3;
	const int COLUNA = 3;
	
	int matriz[LINHA][COLUNA] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
	int i, j; 
	
	
	/*for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			cout << "Digite um valor[" << i + 1 << ", " << j + 1 << "]: ";
			cin >> matriz[LINHA][COLUNA];

		}
	}*/
	
	
	
	//cout << endl;
	cout << "MATRIZ" << endl;
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			cout <<  "\t" << matriz[LINHA][COLUNA];
		}
		cout << endl;
	}
	

	cout << endl;
	cout << "MATRIZ IDENTIDADE" << endl;
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			if (i == j){
				cout  << matriz[LINHA][COLUNA] << "\t";
			}
			else {
				cout << "\t";  
			}
		}
		
		cout << endl; //para a diagonal ficar na diagonal 
		
	}
}
