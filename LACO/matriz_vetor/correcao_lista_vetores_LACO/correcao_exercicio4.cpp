// correção exercicio 4 - Roveri

#include <iostream>
using namespace std;

int main() {
	// para vetores fixos usar uma constante
	// código parametrizado
	const int QTD_ELEMENTOS = 5;
	double valores[QTD_ELEMENTOS];
	double soma_elementos = 0;
	
	for (int i = 0; i < QTD_ELEMENTOS; i++){
		cout << "Digite um valor:" << endl;
		cin >> valores[i];
		
		soma_elementos += valores[i];
		
		//system ("cls");
	}
	
	system ("cls");
	for (int i = 0; i < QTD_ELEMENTOS; i++) {
		cout << valores[i] << "\t";
	}
	
	cout << endl << endl;
	
	cout << "media: " << (soma_elementos / QTD_ELEMENTOS) << endl;
	
	
}
