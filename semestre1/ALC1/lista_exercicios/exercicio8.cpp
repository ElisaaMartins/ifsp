// Exercício 8: Verificação de Múltiplos 
#include <iostream>

using namespace std;

int main () {
	
	int valor1, valor2;
	
	cout << "Insira o valor 1: " << endl;
	cin >> valor1;
	
	cout << "Insira o valor 2: " << endl;
	cin >> valor2;
	
	if (valor2 == 0) { 
		cout << "Erro: O segundo numero nao pode ser zero." << endl;
	}
	else if (valor1 % valor2 == 0) {
		cout << valor1 << " eh multiplo de " << valor2 << endl;  
	} 
	else if (valor1 % valor2 != 0) {
		cout << valor1 << " nao eh multiplo de " << valor2 << endl;
	}
		
}
