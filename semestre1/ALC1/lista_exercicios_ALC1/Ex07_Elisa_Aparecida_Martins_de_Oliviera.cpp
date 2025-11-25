// Exercicio 7: Maior e Menor entre Cinco Inteiros
#include <iostream>

using namespace std; 

int main () {
    int valor1, valor2, valor3, valor4, valor5;
    
    
	cout << "Insira 5 valores: ";
	cin >> valor1 >> valor2 >> valor3 >> valor4 >> valor5;

	// comparando menor
	// valor1 menor
	if (valor1 < valor2 && valor1 < valor3 && valor1 < valor4 && valor1 < valor5) {
		cout << "Menor eh "<< valor1 << endl;
	}
	
	// valor2 menor
	else if (valor2 < valor1 && valor2 < valor3 && valor2 < valor4 && valor2 < valor5){
		cout << "Menor eh "<< valor2 << endl;
	}
	
	// valor3 menor
	else if (valor3 < valor1 && valor3 < valor2 && valor3 < valor4 && valor3 < valor5){
		cout << "Menor eh "<< valor3 << endl;
	}
	
	// valor4 menor
	else if (valor4 < valor1 && valor4 < valor2 && valor4 < valor3 && valor4 < valor5){
		cout << "Menor eh "<< valor4 << endl;
	}
	
	// valor5 menor
	else {
		cout << "Menor eh "<< valor5 << endl;
	}
	
	
	// comparando maior
	// valor1 maior
	if (valor1 > valor2 && valor1 > valor3 && valor1 > valor4 && valor1 > valor5) {
		cout << "Maior eh "<< valor1 << endl;
	}
	
	// valor2 maior
	else if (valor2 > valor1 && valor2 > valor3 && valor2 > valor4 && valor2 > valor5) {
		cout << "Maior eh "<< valor2 << endl;
	}
	
	// valor3 maior
	else if (valor3 > valor1 && valor3 > valor2 && valor3 > valor4 && valor3 > valor5){
		cout << "Maior eh "<< valor3 << endl;
	}
	
	// valor4 maior
	else if (valor4 > valor1 && valor4 > valor2 && valor4 > valor3 && valor4 > valor5){
		cout << "Maior eh "<< valor4 << endl;
	}
	
	// valor5 maior
	else {
		cout << "Maior eh "<< valor5 << endl;
	}
}

