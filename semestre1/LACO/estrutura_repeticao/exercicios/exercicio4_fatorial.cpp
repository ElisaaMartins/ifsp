// 4 - Crie um algoritmo que, dado um n�mero, calcule seu fatorial
#include <iostream> 

using namespace std; 

int main () { 

	int numero, fatorial = 1; 
	
	cout << "Informe um numero inteiro: " << endl; 
	cin >> numero; 

	 if (numero < 0) {
      cout << "N�o � poss�vel calcular o fatorial de um n�mero negativo." << endl;
    } 
	else {
		for (int i = 1; i <= numero; i++){
			fatorial = fatorial * i;
		}
		
		cout << "O fatorial de " << numero << " e " << fatorial << endl;
	}
}

