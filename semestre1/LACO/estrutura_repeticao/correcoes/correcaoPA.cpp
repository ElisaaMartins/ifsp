// 2 - Crie um algoritmo que, dado um n�mero inicial e uma raz�o, mostre os elementos de uma PA (progress�o aritm�tica) 
 
#include <iostream> 
 
using namespace std; 
 
int main (){ 
 
	int numeroInicial, numeroFinal, razao; 
	 
	cout << "digite o numero inicial:" << endl; 
	cin >> numeroInicial; 
	 
	cout << "digite o numero final:" << endl; 
	cin >> numeroFinal; 
	 
	cout << "digite a razao:" << endl; 
	cin >> razao; 
	 
	// Forma 1: for 
	for (numeroInicial; numeroInicial <= numeroFinal; numeroInicial += razao) {  
		cout << numeroInicial << "\t"; 
	} 
	 
	// Forma 2: while 
	/*while (numeroInicial <= numeroFinal ) { 
		cout << numeroInicial << "\t"; 
	 
		numeroInicial  += razao; 
	}*/ 
	 
	// Forma 3: do...while 
	/*do { 
		cout << numeroInicial << "\t"; 
		numeroInicial += razao; 
	} while (numeroInicial <= numeroFinal);*/ 
	 
} 
