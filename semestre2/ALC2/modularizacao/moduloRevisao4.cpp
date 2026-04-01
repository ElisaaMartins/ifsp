#include <iostream>

using namespace std;

<<<<<<< HEAD
void getMultiplos (int a, int b){
    int numerador, denominador;

=======
void maiorMenor (int numerador, int denominador, int a, int b){
>>>>>>> 6ffb01cda10d0af96e9f2ed1e032f1bf23ad794a
	if (a > b){
		numerador = a;
		denominador = b;
	} else {
		numerador = b;
		denominador = a;
	}
<<<<<<< HEAD

    /*if(numerador % denominador == 0){
		cout << "Sao multiplos";
	} else {
		cout << "Nao sao multiplos";
	}*/

	cout<<((numerador%denominador == 0) ? "Sao multiplos" : "Nao sao multiplos");
}

int main () {
	int a, b;

	cout << "Digite o valor a: ";
	cin >> a;

	cout << "Digite o valor b: ";
	cin >> b;

	getMultiplos(a, b);

=======
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
>>>>>>> 6ffb01cda10d0af96e9f2ed1e032f1bf23ad794a
}
