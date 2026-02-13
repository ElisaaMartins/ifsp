/* 6. Escrever um algoritmo que lê 5 valores para a, um de cada vez, 
e conta quantos destes valores são negativos, escrevendo esta informação*/

#include <iostream>

using namespace std;

int main () {
	
	int valores[5] = {4, -2, 0, 18, -5};
	
	for(int i = 0; i < 5; i++){
		if(valores[i] < 0){
			cout << "O numero " << valores[i] << " e negativo" << endl;
		}
	}

}
