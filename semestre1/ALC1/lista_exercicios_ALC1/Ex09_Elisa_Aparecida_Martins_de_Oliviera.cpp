// Exercicio 9: Equivalente Inteiro de um Caractere

#include <iostream>

using namespace std;

int main () {
	char letra;

	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	// usando a operacao de cast -> tranformar letra em equivalente numerico
	// EX de uso: static_cast<int>('A') --> 65 	
	cout << "O equivalente inteiro de " << "'" << letra << "'" << " eh: " << static_cast<int>(letra) << endl;

	
}
