#include <iostream>
// #include cmath

using namespace std;

int main (){
	double peso, altura, imc;
	
	cout << "Informe seu peso: " << endl;
	cin >> peso;
	
	cout << "Informe sua altura: " << endl;
	cin >> altura;
	
	imc = peso / (altura * altura); // pow (altura,2)

	if (imc < 18.5) {
		cout << "Abaixo do peso" << endl;
		
	} else if (imc >= 18.5 && imc < 25) {
		cout << "Peso normal"<< endl;
		
	} else if (imc >= 25 && imc < 30) {
		cout << "Acima do peso"<< endl;
		
	} else if (imc >= 30) { 
		cout << "Obeso"<< endl;
	}
}
