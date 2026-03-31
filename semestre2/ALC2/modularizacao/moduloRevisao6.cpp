#include <iostream>

using namespace std;

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

}
