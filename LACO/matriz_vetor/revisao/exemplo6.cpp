//ordenar vertores
#include <iostream>

using namespace std;

int main () {
	int vet[10], temp;
	
	for (int i = 1; i < 10; i++){
		cout << "Escreva um valor: " << endl;
		cin >> vet[i];
	}
	
	for (int i = 1; i <= 9; i++){
		for (int j = i + 1; j <= 4; j++){
			if (vet[i] > vet[j]) {
				temp = vet[i];
				vet[i] = vet[j];
				vet[j] = temp;
			}
		}
	}
	
	for (int i = 1; i < 10; i++){
		cout << "{" << vet[i] << "}" << endl;
	}
	
}
