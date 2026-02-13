/* 4. Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: "São múltiplos" ou "Não são múltiplos"*/

#include <iostream>

using namespace std;

int main () {
	int a, b;
	
	cout << "Digite o valor a: ";
	cin >> a;
	
	cout << "Digite o valor b: ";
	cin >> b;
	
	if (a > b){
		numerador = a;
		denominador = b;
	} else {
		numerador = b;
		denominador = a;
	}
	
	
	if(numerador % denominador == 0){
		cout << "Sao multiplos";
	} else {
		cout << "Nao sao multiplos";
	}
	
	// count << ((a % b == 0) ? "Sao multiplo" : "Nao sao multiplo");
}
