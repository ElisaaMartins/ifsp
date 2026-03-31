#include <iostream>

using namespace std;

/*void maiorMenor (int valores[], int tamanho){

	int maior = valores[0], menor = valores[0];

	for(int i = 0; i < tamanho; i++){
		cout << valores[i] << "\t";
	if(maior < valores[i]){
		maior = valores[i];
	}
	if (menor > valores[i]){
		menor = valores[i];
	}
	}

	cout << endl;

	cout << endl << "O maior valor e " << maior << endl;
	cout << "O menor valor e " << menor << endl;
}*/


bool verificaMaior(int pReferencia, int pValor){
    return ((pReferencia < pValor) ? pValor : pReferencia);
}

bool verificaMenor(int pReferencia, int pValor){
    return ((pReferencia > pValor) ? pValor : pReferencia);
}

int main () {

	int valores[10] = {6, 0, 22, -10, 50, 4, -2, 0, 18, -5};

    int maior = valores[0], menor = valores[0];

	for(int i = 0; i < 10; i++){
        cout << valores[i] << "\t";
        maior = verificaMaior(maior, valores[i]);
        menor = verificaMenor(menor, valores[i]);
	}

	cout << endl << "O maior valor e " << maior << endl;
	cout << "O menor valor e " << menor << endl;

}
