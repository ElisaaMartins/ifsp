// Exercício 3: Comparando Números Inteiros

#include <iostream>

using namespace std;

int main () {
	double valor1, valor2;
	
	cout << "Insira o primero valor: " << endl;
	cin >> valor1;
	
	cout << "Insira o segundo valor: " << endl;
	cin >> valor2;
	
	if (valor1 > valor2) {
		cout << valor1 << " eh o maior";
	} else if (valor2 > valor1){
		cout << valor2 << " eh o maior";
	} else {
		cout << "Estes numeros sao iguais.";
	}
}
