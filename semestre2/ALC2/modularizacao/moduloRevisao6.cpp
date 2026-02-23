#include <iostream>

using namespace std;

void negativo (int valores[5]){
	for(int i = 0; i < 5; i++){
		if(valores[i] < 0){
			cout << "O numero " << valores[i] << " e negativo" << endl;
		}
	}

}

int main () {
	
	int valores[5] = {4, -2, 0, 18, -5};
	
	negativo(valores);

}
