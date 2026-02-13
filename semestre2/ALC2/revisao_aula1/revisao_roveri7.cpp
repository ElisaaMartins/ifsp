/* 7. Escreva um algoritmo que leia 10 valores e encontre o maior e o menor deles */

#include <iostream>

using namespace std;

int main () {
	
	int valores[10] = {6, 0, 22, -10, 50, 4, -2, 0, 18, -5};
	
	int maior = valores[0], menor = valores[0];
	
	for(int i = 0; i < 10; i++){
		cout << valores[i] << "\t";
		if(maior < valores[i]){
			maior = valores[i];
		}
		if (menor > valores[i]){
			menor = valores[i];
		}
	}
	
	cout << endl << "O maior valor e " << maior << endl;
	cout << "O menor valor e " << menor << endl;
	

}
