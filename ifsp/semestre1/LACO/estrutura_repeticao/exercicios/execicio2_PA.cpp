// 2 - Crie um algoritmo que, dado um n�mero inicial e uma raz�o, mostre os elementos de uma PA (progress�o aritm�tica)

#include <iostream>

using namespace std;

int main (){

	int numeroInicial, razao;
		
	cout << "digite um numero:" << endl;
	cin >> numeroInicial;
	
	cout << "digite a razao:" << endl;
	cin >> razao;

	// vai gerar os 10 primeiros termos da PA, por isso < 10
	for (int elementosPA = 0; elementosPA < 10; elementosPA++) {
		// f�rmula do termo geral PA: an = a1 + (n * r)
		int pa = numeroInicial + elementosPA * razao;
		
		cout << endl;
		
		cout << pa << endl;
	}
}
