// Exercício 10: Separando os Dígitos de um Inteiro 

#include <iostream>

using namespace std;

int main () {
	int numero;
	
	cout << "Insira um numero com 5 digitos: " << endl;
	cin >> numero;
	
	int d1 = numero / 10000;         // 12345 / 10000 = 1
    int d2 = (numero / 1000) % 10;   // (12345 / 1000) % 10 ? 12 % 10 = 2
    int d3 = (numero / 100) % 10;    // (12345 / 100) % 10 ? 123 % 10 = 3
    int d4 = (numero / 10) % 10;     // (12345 / 10) % 10 ? 1234 % 10 = 4
    int d5 = numero % 10;            // Resto da divisão por 10 sempre dá a unidade.

    cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;

}
