#include <iostream> 

using namespace std; 

int main () { 

	int x; 
	
	cout << "Informe o numero" << endl; 
	cin >> x; 
	
	// para saber se um numero é par ou impar
	if (x % 2 == 0){  // retorna o resto da divisão, se 0 é par
		cout << "O numero "<< x << " e PAR" <<endl; 
	} else {  
		cout << "O numero "<< x << " e IMPAR" << endl; 
	} 
	
	// CONDICIONAL COM TERNARIO, alternativa em uma linha
	cout << "O numero: "<< x << ((x % 2 == 0) ? " e PAR" : " e IMPAR")<<endl; 
} 
