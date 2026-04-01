#include <iostream>

using namespace std;

<<<<<<< HEAD
bool verificaNegativo(int pNumero){
    return ((pNumero < 0) ? true : false);
}

void percorreValores (int valores[]){
	for(int i = 0; i < 5; i++){
		if(verificaNegativo(valores[i]) == true){
			cout << "O numero " << valores[i] << " e negativo" << endl;
		}
	}
}

int main () {

	int valores[5] = {4, -2, 0, 18, -5};

	percorreValores(valores);
=======
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
>>>>>>> 6ffb01cda10d0af96e9f2ed1e032f1bf23ad794a

}
