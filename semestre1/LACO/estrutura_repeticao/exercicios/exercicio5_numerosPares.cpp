// 5 - Crie um algoritmo que, dado um n�mero inicial e n�mero final, mostre somente osn�meros pares
#include <iostream> 

using namespace std; 

int main () { 

	int numeroInicial, numeroFinal; 
	
	cout << "Informe o numero inicial: " << endl; 
	cin >> numeroInicial; 

	cout << "Informe o numero final: " << endl; 
	cin >> numeroFinal; 
	
	cout << "Numeros pares: ";
	
	for (int numPar = numeroInicial; numPar <= numeroFinal; numPar++){
		if (numPar % 2 == 0){  
			cout << numPar << " "; 
			
		} 
	}
	
	
} 
