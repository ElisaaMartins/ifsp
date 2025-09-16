#include <iostream>

using namespace std;

int main (){

	int numero = 2; // contador 
	
	while (numero <= 50){ // enquanto numero for menor que 50
		
		cout<<"Numero: "<<numero<<endl;
		
		numero = numero + 1; // contador incrementdo, sem ele fica loop infinito
		//numero++;
	}
	
}
