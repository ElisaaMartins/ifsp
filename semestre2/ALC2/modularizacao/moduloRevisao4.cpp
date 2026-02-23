#include <iostream>

using namespace std;

void maiorMenor (int numerador, int denominador, int a, int b){
	if (a > b){
		numerador = a;
		denominador = b;
	} else {
		numerador = b;
		denominador = a;
	}
}

void numeradorDenominador(int numerador, int denominador){
	if(numerador % denominador == 0){
		cout << "Sao multiplos";
	} else {
		cout << "Nao sao multiplos";
	}
	
}

int main () {
	int a, b, numerador, denominador;
	
	cout << "Digite o valor a: ";
	cin >> a;
	
	cout << "Digite o valor b: ";
	cin >> b;
	
	maiorMenor(numerador, denominador, a, b);

	numeradorDenominador(numerador, denominador);
}
