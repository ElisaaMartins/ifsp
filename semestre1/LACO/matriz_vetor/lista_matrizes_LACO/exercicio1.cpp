/*1 - Crie uma matriz A (4x4) e peça para o usuario informar os valores. Em
seguida, imprima na tela o valor da soma de todos os elementos
da matriz.*/

#include <iostream>

using namespace std;

int main () {
	const int LINHA = 4;
	const int COLUNA = 4;
	
	int matriz[LINHA][COLUNA];
	int i, j, soma;
	
	
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			cout << "Digite um valor[" << i + 1 << ", " << j + 1 << "]: ";
			cin >> matriz[LINHA][COLUNA];
			
			soma += matriz[LINHA][COLUNA];
		}
	}
	
	system("cls");
	
	cout << endl;
	cout << "MATRIZ" << endl;
	for (i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++){
			cout <<  "\t" << matriz[LINHA][COLUNA];
		}
		cout << endl;
	}
	
	cout << "\n A soma dos valores da matriz eh " << soma << endl;
}
