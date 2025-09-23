// 4 - Crie um algoritmo que, dado um número, calcule seu fatorial 
#include <iostream>  
 
using namespace std;  
 
int main () {  
 
	int numero, fatorial = 1;  
	 
	cout << "Informe um numero: " << endl;  
	cin >> numero;  
	 
	system("cls"); 
	 
	fatorial = numero; 
	 
	cout << numero << "! = "; 
	 
	// for 
	/*for (numero; numero > 1; numero--){ 
		fatorial *= (numero - 1); 
		// fatorial = fatorial * (numero - 1); 
		cout << numero << "X"; 
	}*/ 
	 
	// while 
	/*while (numero > 1){ 
		fatorial *= (numero - 1); 
		cout << numero << " X "; 
		numero--; 
	}*/ 
	 
	// do...while 
	 do { 
		fatorial *= (numero - 1);
		cout << numero << " X ";
		numero--; 
	} while (numero > 1);
	 
	 cout << "1 = " << fatorial << endl;
} 
