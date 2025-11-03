#include <iostream>

using namespace std;

int main () {
	int val[7];
	int totPar = 0;
	
	for (int i = 1; i <= 7; i++){
		cout << "Digite o " << i << "° valor: ";
		cin >> val[i];
		
		if (val[i] % 2 == 0){
			totPar = totPar + 1;
		}
	}
	
	cout << "O total de pares foi: " << totPar;
}
