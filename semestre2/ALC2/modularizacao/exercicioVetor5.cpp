#include <iostream>

using namespace std;

int incrementador (int contador){
	return contador + 1;
}


int main () {
	int vetor[5], contador;
	
	while (contador < 5){
		cout << "Digite um numero: ";
		cin >> vetor[contador];
		contador = incrementador(contador);
    }
    
    contador = 0;

	cout << endl << "Valores do vetor: ";
	
	while (contador < 5){
		cout << vetor[contador] << " ";
		contador = incrementador(contador);
    }
}
