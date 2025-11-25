// Exercicio 4: Aritmetica, Menor e Maior Valor

#include <iostream>

using namespace std;

int main () {
	int valor1, valor2, valor3;
	
	cout << "Insira tres valores: ";
	cin >> valor1 >> valor2 >> valor3;
	
	cout << endl;
		
	cout << "Soma eh " << valor1 + valor2 + valor3 << endl;
	
	cout << "Media eh " << (valor1 + valor2 + valor3) / 3 << endl;
	
	cout << "Produto eh " << valor1 * valor2 * valor3 << endl;
	
	
	// comparando menor
	// valor1 menor
	if (valor1 < valor2 && valor1 < valor3) {
		cout << "Menor eh "<< valor1 << endl;
	}
	
	// valor2 menor
	else if (valor2 < valor1 && valor2 < valor3){
		cout << "Menor eh "<< valor2 << endl;
	}
	
	// valor3 menor
	else if (valor3 < valor1 && valor3 < valor2){
		cout << "Menor eh "<< valor3 << endl;
	}
	
	
	// comparando maior
	// valor1 maior
	if (valor1 > valor2 && valor1 > valor3) {
		cout << "Maior eh "<< valor1 << endl;
	}
	
	// valor2 maior
	else if (valor2 > valor1 && valor2 > valor3){
		cout << "Maior eh "<< valor2 << endl;
	}
	
	// valor3 maior
	else if (valor3 > valor1 && valor3 > valor2){
		cout << "Maior eh "<< valor3 << endl;
	}
	
}
