// Exercício 4: Aritmética, Menor e Maior Valor

#include <iostream>

using namespace std;

int main () {
	int valor1, valor2, valor3, menor, maior;
	
	cout << "Insira o primero valor: " << endl;
	cin >> valor1;
	
	cout << "Insira o segundo valor: " << endl;
	cin >> valor2;
	
	cout << "Insira o terceiro valor: " << endl;
	cin >> valor3;
	
	cout << "Soma eh " << valor1 + valor2 + valor3 << endl;
	
	cout << "Media eh " << (valor1 + valor2 + valor3) / 3 << endl;
	
	cout << "Produto eh " << valor1 * valor2 * valor3 << endl;
	
	 // Menor
    if (valor1 <= valor2 && valor1 <= valor3)
        menor = valor1;
    else if (valor2 <= valor1 && valor2 <= valor3)
        menor = valor2;
    else
        menor = valor3;

    // Maior
    if (valor1 >= valor2 && valor1 >= valor3)
        maior = valor1;
    else if (valor2 >= valor1 && valor2 >= valor3)
        maior = valor2;
    else
        maior = valor3;

	
	cout << "Menor eh " << menor << endl;
    cout << "Maior eh " << maior << endl;
	
}
