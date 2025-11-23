// Exercício 9: Equivalente Inteiro de um Caractere#include <iostream>

#include <iostream>

using namespace std;

int main () {
	char letra;
	
	cout << "Digite uma letra: " << endl;
	cin >> letra;
	
	cout << "O equivalente inteiro de " << "'" << letra << "'" << " eh: " << static_cast<int>(letra) << endl;

	
}
