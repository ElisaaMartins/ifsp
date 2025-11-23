// 3 - Crie um algoritmo que, dados um número inicial e final, mostre todos os divisores por 3

#include <iostream> 
 
using namespace std; 
 
int main (){ 
 
	int numeroInicial, numeroFinal, razao; 
	 
	cout << "digite o numero inicial:" << endl; 
	cin >> numeroInicial; 
	 
	cout << "digite o numero final:" << endl; 
	cin >> numeroFinal; 
	 
	system("cls"); //limpa a tela 
	 
	// for 
	/*for (numeroInicial; numeroInicial <= numeroFinal; numeroInicial++){ 
		if (numeroInicial % 3 == 0){ 
			cout << numeroInicial << "\t "; 
		}  
	}*/ 
	 
	//while 
	/*while (numeroInicial <= numeroFinal){ 
		if (numeroInicial % 3 == 0){ 
			cout << numeroInicial << "\t "; 
		}  
		numeroInicial++; 
	}*/ 
	 
	//do...while 
	do { 
		if (numeroInicial % 3 == 0){ 
			cout << numeroInicial << "\t "; 
		} 
	
		numeroInicial++; 
		
	} while (numeroInicial <= numeroFinal); 
} 
