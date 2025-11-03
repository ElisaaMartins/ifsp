#include <iostream>

using namespace std;

int main () {
	int val[7];
	int totPar = 0;
	
	for (int i = 1; i <= 7; i++){
		cout << "Digite o " << i << "o valor: ";
		cin >> val[i];
	}
	
	for (int i = 1; i <= 7; i++){
		if (val[i] % 2 == 0){
			totPar = totPar + 1;
			cout << "Valor par na posicao: " << i << endl;
		}
	}
	
	cout << "O total de pares foi: " << totPar << endl;
}
