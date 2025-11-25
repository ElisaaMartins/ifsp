// Exercicio 3: Comparando Numeros Inteiros

#include <iostream>

using namespace std;

int main () {
	int valor1, valor2;
	
	cout << "Insira o primero valor: " << endl;
	cin >> valor1;
	
	cout << "Insira o segundo valor: " << endl;
	cin >> valor2;
	
	cout << endl;
	
	// se valor1 for maior que valor2
	if (valor1 > valor2) {
		cout << valor1 << " eh o maior";
	}
	
	// se valor2 for maior que valor2
	else if (valor2 > valor1){
		cout << valor2 << " eh o maior";
	} 
	
	// se numeros iguais
	else {
		cout << "Estes numeros sao iguais.";
	}
}
