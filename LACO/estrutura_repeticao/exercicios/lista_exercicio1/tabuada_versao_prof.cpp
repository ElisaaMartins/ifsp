// RESPOSTA DO EXERCICIO 1 - PROFESSOR
#include <iostream>

using namespace std;

int main() {
	
   // Roda a tabuadas de 1 a 10	
   for (int numero = 1; numero <= 10; numero++) {
   	    // Para cada tabuada, varia de 0 a 10
   		for (int mult = 0; mult <= 10; mult++) {
   	  		cout << numero << "x" << mult << "=" << (numero * mult) <<endl;
   		}
   		// Para separar uma tabuada da proxima
   		cout << endl;
	}
	
	/*int numero = 1;
	
	while (numero <= 10) {
		int mult = 0;
		while (mult <= 10) {
			cout<<numero<<"x"<<mult<<"="<<(numero*mult)<<endl;
			mult++;
		}
		numero++;
		cout<<endl;
	}*/

}
