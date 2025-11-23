/* 4. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com a media dos valores.*/

#include <iostream>
using namespace std;

int main() {
	int vet[5], soma = 0;
	double media = 0;
	
	cout << "Digite um valor:" << endl;
	
    for (int i = 0; i < 5; i++) {
		cin >> vet[i];	
    }
    
    // percorrendo o vetor e imprimindo ele
	cout << endl;
    cout << "Numeros digitados" << endl;
    for (int i = 0; i < 5; i++) {
		cout << " " << vet[i] << " ";
    }
    
	// fazendo a media
	cout << endl;
	for (int i = 0; i < 5; i++) {
        soma += vet[i];
    }
    media = soma / 5;
	   
	cout << endl;
	cout << "a media dos numeros digitados e " << media << endl;

}

