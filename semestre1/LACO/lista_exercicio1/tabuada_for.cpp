/* 1 - Crie um algoritmo de mostre na tela a tabuada do 1 ao 10 (utilizando a estrutura for) */

#include <iostream>

using namespace std;

int main (){

	
	for (int numero = 1; numero <= 10; numero++) {
		
		for (int count = 0 ; count <= 10; count++) {
	
			cout << numero << " X " << count << " = " << (numero * count) << endl;
		}
		cout<<endl;
	}

}
