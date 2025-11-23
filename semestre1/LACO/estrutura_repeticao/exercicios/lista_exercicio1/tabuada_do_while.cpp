#include <iostream>

using namespace std;

int main (){

	int numero = 1; //a tabuada começa no 1
	int count;

	do {
		
		count = 1; //zera o contador a cada repetição
		
		do {
			cout << numero << " X " << count << " = " << (numero * count) << endl;
			count++;
		
		} 
	
		while (count <= 10); // faz enquanto o multiplicador for menos que 10
				
		cout<<endl;

		numero++; // soma 1 ao numero pra que mude de tabuada
	}
	
	while (numero <=10); // faz enquanto o numero for menor que 10
	
}
