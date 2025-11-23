// Exercício 11: Tabela de Quadrados e Cubos

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
		
	cout << "inteiro\t" << "quadrado\t" << "cubo" << endl;	
   	for (int inteiro = 1; inteiro <= 10; inteiro++) {
   	    cout << inteiro << "\t" << pow(inteiro,2) << "\t\t" << pow(inteiro,3) << endl;
	}

}

