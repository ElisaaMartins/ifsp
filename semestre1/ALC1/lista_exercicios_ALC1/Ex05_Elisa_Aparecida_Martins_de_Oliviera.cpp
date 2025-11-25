// Exercicio 5: Diametro, Circunferencia e area de um Circulo

#include <iostream>

using namespace std;

int main () {
	double raioCirculo;
	
	double pi = 3.14159;
	
	cout << "Qual valor do raio do circulo: ";
	cin >> raioCirculo;
	
	cout << endl;
	
	cout << "diametro: " << 2 * raioCirculo << endl; // diametro = 2 x raio
	
	cout << "circunferencia: " << 2 * pi * raioCirculo << endl; // circuferencia = 2 x pi x raio
	
	cout << "area: " << pi * raioCirculo * raioCirculo << endl; // area = pi x raio ^2
}
