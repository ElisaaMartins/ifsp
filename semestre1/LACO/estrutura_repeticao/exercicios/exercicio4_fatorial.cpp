// 4 - Crie um algoritmo que, dado um número, calcule seu fatorial
#include <iostream> 

using namespace std; 

int main () { 

	int numero, fatorial = 1; 
	
	cout << "Informe um numero inteiro: " << endl; 
	cin >> numero; 

	 if (numero < 0) {
      cout << "Não é possível calcular o fatorial de um número negativo." << endl;
    } 
	else {
		for (int i = 1; i <= numero; i++){
			fatorial = fatorial * i;
		}
		
		cout << "O fatorial de " << numero << " e " << fatorial << endl;
	}
}

