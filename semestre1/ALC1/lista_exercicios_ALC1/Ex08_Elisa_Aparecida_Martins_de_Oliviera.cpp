// Exercicio 8: Verificacao de Multiplos 

#include <iostream>

using namespace std;

int main () {
	
	int valor1, valor2;
	
	cout << "Insira o valor 1: " << endl;
	cin >> valor1;
	
	cout << "Insira o valor 2: " << endl;
	cin >> valor2;
	
	// se valor2 for igual a 0, vai dar erro, nao existe divisao por 0
	if (valor2 == 0) { 
		cout << "Erro: O segundo numero nao pode ser zero." << endl;
	}
	
	// se o resto da divisao valor1 por valor2 for igual a 0, e multiplo
	else if (valor1 % valor2 == 0) {
		cout << valor1 << " eh multiplo de " << valor2 << endl;  
	} 
	
	// se o resto nao for zero
	else {
		cout << valor1 << " nao eh multiplo de " << valor2 << endl;
	}
	
	
		
}
