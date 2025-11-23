// correção exercicio 3 - Roveri

#include <iostream>
using namespace std;

int main() {
	int valores[10];
	
	int qtd_negativo = 0;
	int soma_positivo = 0;
	
	for (int i = 0; i < 10; i++) {
		cout << "Informe o valor" << (i + 1) << endl;
        cin >> valores[i];
    }	

	// verifica se é positivo ou negativo
	for (int i = 0; i < 10; i++) {
		if (valores[i] < 0) {
			qtd_negativo++; // se negativo apenas acrescenta um na memoria do programa
		}
		else {
			soma_positivo += valores[i]; // se positivo soma o vetor + 1 
		}
    }

	system ("cls");
	for (int i = 0; i < 10; i++) {
		cout << valores[i] << "\t";
	}
	
	cout << endl << endl;
	cout << "Quantidade de numeros negativos => " << qtd_negativo << endl;
	cout << "Soma dos numeros positivos => " << soma_positivo << endl;

}
