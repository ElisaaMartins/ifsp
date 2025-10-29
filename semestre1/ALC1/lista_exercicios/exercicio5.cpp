// Exercício 5: Diâmetro, Circunferência e Área de um Círculo

#include <iostream>

using namespace std;

int main () {
	double raioCirculo;
	
	double pi = 3.14159;
	
	cout << "Qual valor do raio do circulo: " << endl;
	cin >> raioCirculo;
	
	cout << "diametro circulo: " << 2 * raioCirculo << endl;
	cout << "circunferencia circulo: " << 2 * pi * raioCirculo << endl;
	cout << "area circulo: " << pi * raioCirculo * raioCirculo << endl;
}
