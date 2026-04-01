#include <iostream>

using namespace std;

<<<<<<< HEAD
/*void maiorMenor (int valores[], int tamanho){

	int maior = valores[0], menor = valores[0];

=======
void maiorMenor (int valores[], int tamanho){
	
	int maior = valores[0], menor = valores[0];
	
>>>>>>> 6ffb01cda10d0af96e9f2ed1e032f1bf23ad794a
	for(int i = 0; i < tamanho; i++){
		cout << valores[i] << "\t";
	if(maior < valores[i]){
		maior = valores[i];
	}
	if (menor > valores[i]){
		menor = valores[i];
	}
	}
<<<<<<< HEAD

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

=======
	
	cout << endl;
	
	cout << endl << "O maior valor e " << maior << endl;
	cout << "O menor valor e " << menor << endl;
}


int main () {
	
	int valores[10] = {6, 0, 22, -10, 50, 4, -2, 0, 18, -5};
	
	
	maiorMenor(valores, 10);
>>>>>>> 6ffb01cda10d0af96e9f2ed1e032f1bf23ad794a
}
