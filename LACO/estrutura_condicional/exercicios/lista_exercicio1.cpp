#include <iostream>

using namespace std;

int main (){
	int valorA, valorB, valorC, soma;
	
	cout << "Informe o primeiro valor: " << endl;
	cin >> valorA;
	
	cout << "Informe o segundo valor: " << endl;
	cin >> valorB;
	
	cout << "Informe o terceiro valor: " << endl;
	cin >> valorC;
	
	soma = valorA + valorB;

	if (soma < valorC){
		cout << valorA << " + " << valorB << " = " << soma << " < " << valorC << endl;
	} else {
		cout << "a soma dos valores nao e menor que" << valorC << endl;
	}
}
