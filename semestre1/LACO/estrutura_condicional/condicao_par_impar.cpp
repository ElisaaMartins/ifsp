#include <iostream> 

using namespace std; 

int main () { 

	int x; 
	
	cout << "Informe o numero" << endl; 
	cin >> x; 
	
	// para saber se um numero � par ou impar
	if (x % 2 == 0){  // retorna o resto da divis�o, se 0 � par
		cout << "O numero "<< x << " e PAR" <<endl; 
	} else {  
		cout << "O numero "<< x << " e IMPAR" << endl; 
	} 
	
	// CONDICIONAL COM TERNARIO, alternativa em uma linha
	cout << "O numero: "<< x << ((x % 2 == 0) ? " e PAR" : " e IMPAR")<<endl; 
} 
